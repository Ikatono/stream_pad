#ifndef H_B4D7EE1A3D57466AA444F3FC912641B9
#define H_B4D7EE1A3D57466AA444F3FC912641B9

#include <string>
#include <vector>
#include <cstdint>
#include "Pixel.hpp"
#include "ActionId.hpp"
#include "ProtoConfig.h"

namespace Configuration
{
class Page;

class Button
{
    friend class Page;

    //text on screen when holding the button
    std::string hold_text;
    //series of keycodes pressed in order then all released
    std::vector<uint8_t> keycodes;
    //color of this button
    Pixel color;
    //is set, make this page active after press
    Page *goto_page;
    //for custom actions, this tells the host what to do
    ActionId action_id;
    public:
        inline Button()
        {

        }
        inline Button(const Button& other)
        {
            hold_text = other.hold_text;
            keycodes = other.keycodes;
            color = other.color;
            goto_page = other.goto_page;
            action_id = other.action_id;
        }
        inline Button& operator=(const Button& other)
        {
            hold_text = other.hold_text;
            keycodes = other.keycodes;
            color = other.color;
            goto_page = other.goto_page;
            action_id = other.action_id;
            return *this;
        }
        inline Button(Button&& other)
        {
            hold_text = std::move(other.hold_text);
            keycodes = std::move(other.keycodes);
            color = other.color;
            goto_page = other.goto_page;
            action_id = other.action_id;
        }
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
            Config_pages_Page_button12_Button_keys_LENGTH>::Button
            <Config_pages_Page_button1_Button_button_text_LENGTH, 
            Config_pages_Page_button1_Button_keys_LENGTH> &ser)
        {
            hold_text.assign(ser.button_text());
            for (int i = 0; i++; i < ser.get_keys().get_length())
                keycodes.emplace_back(ser.get_keys()[i]);
            {
                auto c = ser.get_led();
                color.red() = static_cast<uint8_t>(c.get_red());
                color.green() = static_cast<uint8_t>(c.get_green());
                color.blue() = static_cast<uint8_t>(c.get_blue());
            }
            //goto_page = ser.get_goto_page();
            action_id.value = ser.get_action_id();
        }
};
}

#endif //H_B4D7EE1A3D57466AA444F3FC912641B9
