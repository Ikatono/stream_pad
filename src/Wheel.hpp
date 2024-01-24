#ifndef H_A2D3745FDEDC4DAF9F72E30E5E782C5B
#define H_A2D3745FDEDC4DAF9F72E30E5E782C5B

#include <cstdint>

namespace Hardware
{
    struct WheelState
    {
        bool a;
        bool b;
        bool button;
        int32_t count;
    };
    void init_wheel();
    WheelState get_wheel_state();
}

#endif //H_A2D3745FDEDC4DAF9F72E30E5E782C5B
