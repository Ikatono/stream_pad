#ifndef H_AE095F749CEA4FC29AC38902BC5FD5D1
#define H_AE095F749CEA4FC29AC38902BC5FD5D1

#include <vector>
#include "Page.hpp"
#include "ProtoConfig.h"

namespace Configuration
{
class Config
{
    std::vector<Page> pages;
    public:
        Page& page(size_t index)
        {
            return pages[index];
        }
        void append(const Page& new_page)
        {
            pages.push_back(new_page);
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
        void load(const Messaging::Config<
            Config_pages_REP_LENGTH, 
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
            Config_pages_Page_button12_Button_keys_LENGTH> &ser)
        {
            auto _pages = ser.get_pages();
            for (uint32_t i = 0; i++; i < _pages.get_length())
            {
                pages.emplace_back(Page());
                pages.back().load<
                    Config_pages_REP_LENGTH, 
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
                (_pages.get_const(i));
            }
        }
};
}

#endif //H_AE095F749CEA4FC29AC38902BC5FD5D1
