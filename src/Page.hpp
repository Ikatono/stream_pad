#ifndef H_1AAB801F01BA49D0BB2AAB917C307E50
#define H_1AAB801F01BA49D0BB2AAB917C307E50

#include <array>
#include "Button.hpp"
#include "ProtoConfig.h"

namespace Configuration
{
class Page
{
    static std::array<Pixel, 12> led_rgb;
    std::array<Button, 12> buttons;
    std::string display_text;
    public:
        inline Page() { }
        inline Page(const Page& other) 
        {
            buttons = other.buttons;
            display_text = other.display_text;
        }
        inline Page(Page&& other) : buttons(std::move(other.buttons)) { }
        template<
            uint32_t Config_pages_REP_LENGTH, 
            uint32_t Config_pages_Page_page_text_LENGTH, 
            uint32_t Config_pages_Page_button1_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button1_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button2_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button2_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button3_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button3_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button4_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button4_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button5_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button5_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button6_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button6_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button7_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button7_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button8_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button8_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button9_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button9_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button10_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button10_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button11_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button11_Button_keys_LENGTH, 
            uint32_t Config_pages_Page_button12_Button_button_text_LENGTH, 
            uint32_t Config_pages_Page_button12_Button_keys_LENGTH>
        void load(const typename Messaging::Config<Config_pages_REP_LENGTH, 
            Config_pages_Page_page_text_LENGTH, 
            Config_pages_Page_button1_Button_button_text_LENGTH, 
            Config_pages_Page_button1_Button_keys_LENGTH, 
            Config_pages_Page_button2_Button_button_text_LENGTH, 
            Config_pages_Page_button2_Button_keys_LENGTH, 
            Config_pages_Page_button3_Button_button_text_LENGTH, 
            Config_pages_Page_button3_Button_keys_LENGTH, 
            Config_pages_Page_button4_Button_button_text_LENGTH, 
            Config_pages_Page_button4_Button_keys_LENGTH, 
            Config_pages_Page_button5_Button_button_text_LENGTH, 
            Config_pages_Page_button5_Button_keys_LENGTH, 
            Config_pages_Page_button6_Button_button_text_LENGTH, 
            Config_pages_Page_button6_Button_keys_LENGTH, 
            Config_pages_Page_button7_Button_button_text_LENGTH, 
            Config_pages_Page_button7_Button_keys_LENGTH, 
            Config_pages_Page_button8_Button_button_text_LENGTH, 
            Config_pages_Page_button8_Button_keys_LENGTH, 
            Config_pages_Page_button9_Button_button_text_LENGTH, 
            Config_pages_Page_button9_Button_keys_LENGTH, 
            Config_pages_Page_button10_Button_button_text_LENGTH, 
            Config_pages_Page_button10_Button_keys_LENGTH, 
            Config_pages_Page_button11_Button_button_text_LENGTH, 
            Config_pages_Page_button11_Button_keys_LENGTH, 
            Config_pages_Page_button12_Button_button_text_LENGTH, 
            Config_pages_Page_button12_Button_keys_LENGTH>::Page
            <Config_pages_Page_page_text_LENGTH, 
            Config_pages_Page_button1_Button_button_text_LENGTH, 
            Config_pages_Page_button1_Button_keys_LENGTH, 
            Config_pages_Page_button2_Button_button_text_LENGTH, 
            Config_pages_Page_button2_Button_keys_LENGTH, 
            Config_pages_Page_button3_Button_button_text_LENGTH, 
            Config_pages_Page_button3_Button_keys_LENGTH, 
            Config_pages_Page_button4_Button_button_text_LENGTH, 
            Config_pages_Page_button4_Button_keys_LENGTH, 
            Config_pages_Page_button5_Button_button_text_LENGTH, 
            Config_pages_Page_button5_Button_keys_LENGTH, 
            Config_pages_Page_button6_Button_button_text_LENGTH, 
            Config_pages_Page_button6_Button_keys_LENGTH, 
            Config_pages_Page_button7_Button_button_text_LENGTH, 
            Config_pages_Page_button7_Button_keys_LENGTH, 
            Config_pages_Page_button8_Button_button_text_LENGTH, 
            Config_pages_Page_button8_Button_keys_LENGTH, 
            Config_pages_Page_button9_Button_button_text_LENGTH, 
            Config_pages_Page_button9_Button_keys_LENGTH, 
            Config_pages_Page_button10_Button_button_text_LENGTH, 
            Config_pages_Page_button10_Button_keys_LENGTH, 
            Config_pages_Page_button11_Button_button_text_LENGTH, 
            Config_pages_Page_button11_Button_keys_LENGTH, 
            Config_pages_Page_button12_Button_button_text_LENGTH, 
            Config_pages_Page_button12_Button_keys_LENGTH> &ser)
        {
            buttons[0].load<Config_pages_REP_LENGTH, 
                Config_pages_Page_page_text_LENGTH,
                Config_pages_Page_button1_Button_button_text_LENGTH, 
                Config_pages_Page_button1_Button_keys_LENGTH, 
                Config_pages_Page_button2_Button_button_text_LENGTH, 
                Config_pages_Page_button2_Button_keys_LENGTH, 
                Config_pages_Page_button3_Button_button_text_LENGTH, 
                Config_pages_Page_button3_Button_keys_LENGTH, 
                Config_pages_Page_button4_Button_button_text_LENGTH, 
                Config_pages_Page_button4_Button_keys_LENGTH, 
                Config_pages_Page_button5_Button_button_text_LENGTH, 
                Config_pages_Page_button5_Button_keys_LENGTH, 
                Config_pages_Page_button6_Button_button_text_LENGTH, 
                Config_pages_Page_button6_Button_keys_LENGTH, 
                Config_pages_Page_button7_Button_button_text_LENGTH, 
                Config_pages_Page_button7_Button_keys_LENGTH, 
                Config_pages_Page_button8_Button_button_text_LENGTH, 
                Config_pages_Page_button8_Button_keys_LENGTH, 
                Config_pages_Page_button9_Button_button_text_LENGTH, 
                Config_pages_Page_button9_Button_keys_LENGTH, 
                Config_pages_Page_button10_Button_button_text_LENGTH, 
                Config_pages_Page_button10_Button_keys_LENGTH, 
                Config_pages_Page_button11_Button_button_text_LENGTH, 
                Config_pages_Page_button11_Button_keys_LENGTH, 
                Config_pages_Page_button12_Button_button_text_LENGTH, 
                Config_pages_Page_button12_Button_keys_LENGTH>
                (ser.get_button1());
        }
        void update_leds();
        Button& button(std::size_t index)
        {
            return buttons[index];
        }
};
}

#endif //H_1AAB801F01BA49D0BB2AAB917C307E50
