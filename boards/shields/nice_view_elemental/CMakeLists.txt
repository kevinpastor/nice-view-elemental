if(CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_WIDGET_STATUS)
    zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)

    zephyr_library_sources(
        ./src/fonts/press_start_2p_8.c
        ./src/fonts/press_start_2p_16.c
        ./src/fonts/press_start_2p_24.c
        
        ./src/images/animation/frame_0001.c
        ./src/images/animation/frame_0002.c
        ./src/images/animation/frame_0003.c
        ./src/images/animation/frame_0004.c
        ./src/images/animation/frame_0005.c
        ./src/images/animation/frame_0006.c
        ./src/images/animation/frame_0007.c
        ./src/images/animation/frame_0008.c
        ./src/images/animation/frame_0009.c
        ./src/images/animation/frame_0010.c

        ./src/images/battery_bolt.c
        ./src/images/battery.c
#        ./src/images/black.c
        ./src/images/bluetooth_connected.c
        ./src/images/bluetooth_disconnected.c
        ./src/images/bluetooth_searching.c
#        ./src/images/grid_inverse.c
#        ./src/images/grid.c
        ./src/images/usb.c
        
        ./src/utils/draw_battery.c
        ./src/utils/draw_image.c
        
        ./src/initialize_listeners.c
        ./src/main.c
        ./src/render.c
    )
endif()
