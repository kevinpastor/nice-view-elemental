if(CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_WIDGET_STATUS)
    zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)

    zephyr_library_sources(
        ./src/images/logo_0.c
        ./src/images/logo_1.c
        ./src/images/logo_2.c
        ./src/images/logo_3.c
        ./src/images/logo_4.c
        ./src/images/logo_5.c
        ./src/images/logo_6.c
        ./src/images/logo_7.c
        ./src/images/logo_8.c
        ./src/images/logo_9.c
        ./src/images/logo_10.c
        ./src/images/logo_11.c
        ./src/images/logo_12.c
        ./src/images/logo_13.c
        ./src/images/logo_14.c
        ./src/images/logo_15.c
        ./src/images/logo_16.c
        ./src/images/logo_17.c
        ./src/images/logo_18.c
        ./src/images/logo_19.c
        ./src/images/logo_20.c
        ./src/images/logo_21.c
        ./src/images/logo_22.c
        ./src/images/logo_23.c
        ./src/images/logo_24.c  

        ./src/fonts/press_start_2p_8.c
        ./src/fonts/press_start_2p_16.c
        ./src/fonts/press_start_2p_24.c

        ./src/images/battery_bolt.c
        ./src/images/battery.c
        ./src/images/bluetooth_connected.c
        ./src/images/bluetooth_disconnected.c
        ./src/images/bluetooth_searching.c
        ./src/images/grid_inverse.c
        ./src/images/grid.c
        ./src/images/usb.c
        
        ./src/utils/draw_battery.c
        ./src/utils/draw_image.c
        
        ./src/initialize_listeners.c
        ./src/main.c
        ./src/render.c
    )
endif()
