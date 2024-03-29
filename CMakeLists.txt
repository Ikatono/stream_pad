cmake_minimum_required(VERSION 3.20)

set(ENV{PICO_SDK_PATH} ${CMAKE_CURRENT_LIST_DIR}/pico-sdk)
set(FREERTOS_KERNEL_PATH ${CMAKE_CURRENT_LIST_DIR}/FreeRTOS/FreeRTOS/Source)
set(PICO_BOARD adafruit_macropad_rp2040)

include(pico_sdk_import.cmake)
include(pico_extras_import_optional.cmake)
include(FreeRTOS_Kernel_import.cmake)

project(threeam C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_executable(stream_pad)

pico_sdk_init()

pico_generate_pio_header(stream_pad ${CMAKE_CURRENT_LIST_DIR}/src/Neopixel.pio)

add_compile_definitions(
        TARGET_RP2040
        PICO_FLASH_SIZE_BYTES=8388608
        ARDUINO_ADAFRUIT_MACROPAD_RP2040
        USBD_PID=0x8107
        USBD_VID=0x239a
        USBD_MAX_POWER_MA=250
        ARM_MATH_CM0_FAMILY
        ARM_MATH_CM0_PLUS
        CFG_TUSB_MCU=OPT_MCU_RP2040
        USBD_MAX_POWER_MA=250
)

target_compile_options(stream_pad PUBLIC -Osize)

set_property()

pico_set_linker_script(stream_pad ${CMAKE_CURRENT_LIST_DIR}/src/memmap_custom2.ld)

target_sources(stream_pad PRIVATE
	src/main.cpp
        src/Page.cpp
        src/Config.cpp
        src/Neopixels.cpp
        src/ReadKeys.cpp
        src/Wheel.cpp
        #this is definitely wrong
        #pico-sdk/src/rp2_common/hardware_gpio/include/hardware/
        EmbeddedProto/src/Fields.cpp
        EmbeddedProto/src/MessageInterface.cpp
        EmbeddedProto/src/ReadBufferSection.cpp
	)

target_include_directories(stream_pad PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/src/
        ${CMAKE_CURRENT_LIST_DIR}/src/protogen/
        ${CMAKE_CURRENT_LIST_DIR}/EmbeddedProto/src/
        ${CMAKE_CURRENT_LIST_DIR}/tinyusb/
        )

target_link_libraries(stream_pad
        pico_stdlib
        hardware_pio
        pico_unique_id
        tinyusb_device
        tinyusb_board
        )

pico_enable_stdio_usb(stream_pad 1)
pico_enable_stdio_uart(stream_pad 0)

pico_add_extra_outputs(stream_pad)
