#ifndef H_A2D3745FDEDC4DAF9F72E30E5E782C5B
#define H_A2D3745FDEDC4DAF9F72E30E5E782C5B

#include <cstdint>

namespace Hardware
{
    struct WheelState
    {
        int32_t count;
        bool a;
        bool b;
        bool button;
    };
    void init_wheel();
    WheelState get_wheel_state();
}

#endif //H_A2D3745FDEDC4DAF9F72E30E5E782C5B
