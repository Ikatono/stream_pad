#include "Wheel.hpp"
#include "hardware/gpio.h"
#include "Pinmap.hpp"

namespace Hardware
{
    static int32_t wheel_count = 0;
    static void wheel_interrupt(unsigned int gpio, uint32_t event_mask)
    {
        
    }    
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
        gpio_set_irq_enabled_with_callback(Pin::WheelA, GPIO_IRQ_EDGE_FALL, true, &wheel_interrupt);
        gpio_set_irq_enabled(Pin::WheelB, GPIO_IRQ_EDGE_FALL, true);
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
