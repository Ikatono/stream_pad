#include "Wheel.hpp"
#include "hardware/gpio.h"
#include "Pinmap.hpp"

namespace Hardware
{
    void init_wheel()
    {
        gpio_init_mask(
            (1 << Pin::WheelA)
            | (1 << Pin::WheelB)
            | (1 << Pin::WheelButton));
        gpio_set_input_enabled(Pin::WheelA, true);
        gpio_set_input_enabled(Pin::WheelB, true);
        gpio_set_input_enabled(Pin::WheelButton, true);
        gpio_pull_up(Pin::WheelButton);
    }
    WheelState get_wheel_state()
    {
        WheelState state;
        auto pins = gpio_get_all();
        state.a = (pins & (1 << Pin::WheelA)) != 0;
        state.b = (pins & (1 << Pin::WheelB)) != 0;
        state.button = (pins & (1 << Pin::WheelButton)) != 0;
        return state;
    }
}
