#ifndef H_010DEF16FF074C9DAAD8143DF189A536
#define H_010DEF16FF074C9DAAD8143DF189A536

#include <cstdint>
#include "Pinmap.hpp"
#include <iterator>

namespace Hardware
{
    constexpr unsigned int key_pins()
    {
        uint32_t pins = 0;
        for (int i = 1; i <= 12; i++)
            pins |= Pin::Key(i);
        return pins;
    }
    struct KeyState
    {
        //might implement an iterator eventually
        // struct Iterator
        // {
        //     using iterator_category = std::random_access_iterator_tag;
        //     using difference_type   = int;
        //     using value_type        = bool;
        //     using pointer           = bool*;
        //     using reference         = bool&;

        //     private:

        // };
        uint32_t data;
        bool get_pin(int pinnum) const;
        void set_pin(int pinnum, bool value);
    };
    void init_keys();
    KeyState read_keys();
}

#endif //H_010DEF16FF074C9DAAD8143DF189A536
