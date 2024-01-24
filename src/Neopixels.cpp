#include "Neopixels.hpp"
#include <cstdint>
#include "Neopixel.pio.h"
//#include "Pinmap.hpp"
#include "hardware/gpio.h"

#define NEO_PIO pio0

namespace LED
{
    static int state_machine;
    void init_neopixels(Pin::pin_t pin)
    {
        constexpr float NEOPIXEL_FREQ = 800000;
        static bool initialized = false;
        if (!initialized)
        {
            PIO pio = NEO_PIO;
            auto offset = pio_add_program(pio, &ws2812_program);
            state_machine = pio_claim_unused_sm(pio, true);
            ws2812_program_init(pio, state_machine, offset, pin, NEOPIXEL_FREQ, false);
            initialized = true;
        }
    }
    void write_leds(Configuration::Pixel *buffer)
    {

    }
    void put_pixel(Configuration::Pixel pixel)
    {
        pio_sm_put_blocking(NEO_PIO, state_machine, pixel.value);
    }
    void init_notification_led()
    {
        gpio_init(Pin::LED);
        //gpio_set_function(Pin::LED, GPIO_FUNC_SIO);
        gpio_set_input_enabled(Pin::LED, false);
        gpio_put(Pin::LED, false);
    }
    void set_notification_led(bool value)
    {
        gpio_put(Pin::LED, value);
    }
    bool get_notification_led()
    {
        return gpio_get(Pin::LED);
    }
}
