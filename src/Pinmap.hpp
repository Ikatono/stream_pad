#ifndef H_FCF0432A49E34C2DA99E0085234840A5
#define H_FCF0432A49E34C2DA99E0085234840A5

#include <cstdint>
#include <limits>

namespace Pin
{
    using pin_t = unsigned int;
    constexpr pin_t InvalidPin  = std::numeric_limits<pin_t>::max();
    constexpr pin_t WheelButton = 0;
    constexpr pin_t WheelA      = 17;
    constexpr pin_t WheelB      = 18;
    constexpr pin_t Key(uint32_t key_number)
    {
        if (1 <= key_number <= 12)
            return static_cast<pin_t>(key_number);
        return InvalidPin;
    }
    constexpr pin_t OLED_CS     = 22;
    constexpr pin_t OLED_RESET  = 23;
    constexpr pin_t OLED_DC     = 24;
    constexpr pin_t SCK         = 26;
    constexpr pin_t MOSI        = 27;
    constexpr pin_t MISO        = 28;

    constexpr pin_t NEOPIXEL    = 19;
    
    constexpr pin_t LED         = 13;
    constexpr pin_t SPEAKER_SHUTDOWN    = 14;
    constexpr pin_t SPEAKER     = 16;

}

#endif //H_FCF0432A49E34C2DA99E0085234840A5