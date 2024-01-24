#ifndef H_594B306D782340DC94F812F498931430
#define H_594B306D782340DC94F812F498931430

#include "Pinmap.hpp"
#include "Pixel.hpp"

namespace LED
{
    void init_neopixels(Pin::pin_t pin);
    void write_leds(Configuration::Pixel *buffer);
    void put_pixel(Configuration::Pixel pixel);
    void init_notification_led();
    void set_notification_led(bool value);
    bool get_notification_led();
}


#endif //H_594B306D782340DC94F812F498931430
