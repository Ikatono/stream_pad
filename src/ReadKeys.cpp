#include "ReadKeys.hpp"
#include "Pinmap.hpp"
#include "hardware/gpio.h"

namespace Hardware
{
    bool KeyState::get_pin(int pinnum) const
    {
        return data & (1 << pinnum);
    }
    void KeyState::set_pin(int pinnum, bool value)
    {
        if (value)
            data |= (1 << pinnum);
        else
            data &= ~(1 << pinnum);
    }
    void init_keys()
    {
        static bool initialized = false;
        if (!initialized)
        {
            gpio_init_mask(key_pins());
            for (uint32_t i = 1; i <= 12; i++)
            {
                //gpio_set_function(Pin::Key(i), GPIO_FUNC_SIO);
                gpio_set_input_enabled(Pin::Key(i), true);
                gpio_pull_up(Pin::Key(i));
            }
            initialized = true;
        }
    }
    KeyState read_keys()
    {
        uint32_t raw = gpio_get_all();
        KeyState state;
        for (int i = 1; i <= 12; i++)
            if (raw & (1 << i))
                state.set_pin(i, true);
        return state;
    }
}