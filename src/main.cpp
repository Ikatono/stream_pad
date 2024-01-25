#include "Config.hpp"
#include "Page.hpp"
#include "ProtoConfig.h"
#include "ReadBufferInterface.h"
#include "ReadBufferFixedSize.h"
#include <stdio.h>
#include "pico/stdlib.h"
#include <cstring>
#include "Neopixels.hpp"
#include "ReadKeys.hpp"

constexpr uint32_t MAX_KEY_PRESSES = 5;
constexpr uint32_t MAX_STR_LENGTH = 50;
constexpr uint32_t MAX_PAGES = 12;
constexpr uint32_t BUFFER_SIZE = 1024;

using ConfigDeser = Messaging::Config<MAX_PAGES, MAX_STR_LENGTH, MAX_STR_LENGTH,
    MAX_KEY_PRESSES, MAX_STR_LENGTH, MAX_KEY_PRESSES, MAX_STR_LENGTH,
    MAX_KEY_PRESSES, MAX_STR_LENGTH, MAX_KEY_PRESSES, MAX_STR_LENGTH,
    MAX_KEY_PRESSES, MAX_STR_LENGTH, MAX_KEY_PRESSES, MAX_STR_LENGTH, 
    MAX_KEY_PRESSES, MAX_STR_LENGTH, MAX_KEY_PRESSES, MAX_STR_LENGTH,
    MAX_KEY_PRESSES, MAX_STR_LENGTH, MAX_KEY_PRESSES, MAX_STR_LENGTH,
    MAX_KEY_PRESSES, MAX_STR_LENGTH, MAX_KEY_PRESSES>;

Configuration::Config config;
Configuration::Page *active_page;
char config_buffer[1024];

//extern "C"
int main()
{
    //stdio_init_all();
    //sleep_ms(10 * 1000);
    //puts("boot\n");
    //printf("boot\n");
    // LED::init_neopixels(Pin::NEOPIXEL);
    // Configuration::Pixel pix;
    // pix.red() = 100;
    // pix.green() = 100;
    // pix.blue() = 100;
    // for (int i = 0; i < 12; i++)
    //     LED::put_pixel(pix);
    // Hardware::init_keys();
    LED::init_notification_led();
    LED::set_notification_led(true);
    while (1)
    {
        auto keys = Hardware::read_keys();
        //LED::set_notification_led(keys.data != 0);
        LED::set_notification_led(true);
        printf("Keys: {}\n", keys.data);
        sleep_ms(1000);
    }
    //block scope to keep the deserialized config around as little as possible
    {
        EmbeddedProto::ReadBufferFixedSize<BUFFER_SIZE> buffer;
        ConfigDeser config_message;
        if (!gets(reinterpret_cast<char*>(buffer.get_data())))
        {
            //read failed
        }
        buffer.set_bytes_written(std::strlen(reinterpret_cast<char*>(buffer.get_data())));
        config_message.deserialize(buffer);
        config.load(config_message);
    }
    while (true);
}
