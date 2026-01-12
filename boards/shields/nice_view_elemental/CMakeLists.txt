if(CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_WIDGET_STATUS)
    zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)

    zephyr_library_sources(
        ./src/background/logo_1.c
        ./src/background/logo_2.c
        ./src/background/logo_3.c
        ./src/background/logo_4.c
        ./src/background/logo_5.c
        ./src/background/logo_6.c
        ./src/background/logo_7.c
        ./src/background/logo_8.c  
        ./src/background/logo_9.c  
        ./src/background/logo_10.c  
        ./src/background/logo_11.c  
        ./src/background/logo_12.c  
        ./src/background/logo_13.c  
        ./src/background/logo_14.c  
        ./src/background/logo_15.c  
        ./src/background/logo_16.c  
        ./src/background/logo_17.c  
        ./src/background/logo_18.c  
        ./src/background/logo_19.c  
        ./src/background/logo_20.c  
        ./src/background/logo_21.c  
        ./src/background/logo_22.c  
        ./src/background/logo_23.c  
        ./src/background/logo_24.c  
        ./src/background/logo_25.c  

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
