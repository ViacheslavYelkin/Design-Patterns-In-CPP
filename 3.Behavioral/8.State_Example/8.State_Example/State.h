#pragma once

#include <iostream>


enum class State
{
    OffHook,
    Connecting,
    Connected,
    OnHold,
    OnHook
};

inline std::ostream& operator<<(std::ostream& os, const State& s)
{
    switch (s)
    {
    case State::OffHook:
        os << "off the hook";
        break;
    case State::Connecting:
        os << "connecting";
        break;
    case State::Connected:
        os << "connected";
        break;
    case State::OnHold:
        os << "on hold";
        break;
    case State::OnHook:
        os << "on the hook";
        break;
    }
    return os;
}