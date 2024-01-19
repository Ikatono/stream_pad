#include "Config.hpp"
#include "Page.hpp"
#include "ProtoConfig.h"
#include "ReadBufferInterface.h"
#include "ReadBufferFixedSize.h"
//#include <stdio.h>
#include "pico/stdlib.h"
#include <cstring>

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

extern "C"
int main()
{
    stdio_init_all();
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
