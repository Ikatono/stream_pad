#ifndef H_B4D7EE1A3D57466AA444F3FC912641B9
#define H_B4D7EE1A3D57466AA444F3FC912641B9

#include <string>
#include <vector>
#include <cstdint>
#include "Pixel.hpp"
#include "ActionId.hpp"

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
        Button(Button&& other)
        {
            hold_text = std::move(other.hold_text);
            keycodes = std::move(other.keycodes);
            color = other.color;
            goto_page = other.goto_page;
            action_id = other.action_id;
        }
};

#endif //H_B4D7EE1A3D57466AA444F3FC912641B9
