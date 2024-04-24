#pragma once

#include <iostream>


enum class Trigger
{
    CallDialed,
    HungUp,
    CallConnected,
    PlacedOnHold,
    TakenOffHold,
    LeftMessage,
    StopUsingPhone
};

inline std::ostream& operator<<(std::ostream& os, const Trigger& t)
{
    switch (t)
    {
    case Trigger::CallDialed:
        os << "call dialed";
        break;
    case Trigger::HungUp:
        os << "hung up";
        break;
    case Trigger::CallConnected:
        os << "call connected";
        break;
    case Trigger::PlacedOnHold:
        os << "placed on hold";
        break;
    case Trigger::TakenOffHold:
        os << "taken off hold";
        break;
    case Trigger::LeftMessage:
        os << "left message";
        break;
    case Trigger::StopUsingPhone:
        os << "putting phone on hook";
        break;
    default: break;
    }
    return os;
}