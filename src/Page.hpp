#ifndef H_1AAB801F01BA49D0BB2AAB917C307E50
#define H_1AAB801F01BA49D0BB2AAB917C307E50

#include <array>
#include "Button.hpp"

class Page
{
    static std::array<Pixel, 12> led_rgb;
    std::array<Button, 12> buttons;
    std::string distplay_text;
    public:
        Page(Page&& other) : buttons(std::move(other.buttons)) { }
        void update_leds();
        Button& button(std::size_t index)
        {
            return buttons[index];
        }
};

#endif //H_1AAB801F01BA49D0BB2AAB917C307E50
