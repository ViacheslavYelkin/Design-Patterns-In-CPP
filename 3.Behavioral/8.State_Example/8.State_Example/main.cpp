#include <iostream>
#include <map>
#include <vector>

#include "State.h"
#include "Trigger.h"

int main(int argc, char** argv)
{
    std::map<State, std::vector<std::pair<Trigger, State>>> rules;

    rules[State::OffHook] = {
      {Trigger::CallDialed, State::Connecting},
      {Trigger::StopUsingPhone, State::OnHook}
    };

    rules[State::Connecting] = {
      {Trigger::HungUp, State::OffHook},
      {Trigger::CallConnected, State::Connected}
    };

    rules[State::Connected] = {
      {Trigger::LeftMessage, State::OffHook},
      {Trigger::HungUp, State::OffHook},
      {Trigger::PlacedOnHold, State::OnHold}
    };

    rules[State::OnHold] = {
      {Trigger::TakenOffHold, State::Connected},
      {Trigger::HungUp, State::OffHook}
    };

    State currentState{ State::OffHook },
        exitState{ State::OnHook };

    while (true)
    {
        std::cout << "The phone is currently " << currentState << std::endl;
    select_trigger:
        std::cout << "Select a trigger:" << "\n";

        int i = 0;
        for (auto item : rules[currentState])
        {
            std::cout << i++ << ". " << item.first << "\n";
        }

        int input;
        std::cin >> input;
        if (input < 0 || (input + 1) > rules[currentState].size())
        {
            std::cout << "Incorrect option. Please try again." << "\n";
            goto select_trigger;
        }

        currentState = rules[currentState][input].second;
        if (currentState == exitState) break;
    }

    std::cout << "We are done using the phone" << "\n";

    return EXIT_SUCCESS;
}