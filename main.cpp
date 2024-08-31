#include <obs-module.h>
#include <web-sock.h>

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE(PLUGIN_NAME, "en-US")

bool obs_module_load(void)
{
    // ... other initialization (e.g., create plugin data struct) ...

    // Initialize UI 
    init_ui(data); // Assuming you have a function to initialize your UI

    // Initialize WebSocket module
    data->webSocketModule = new MyWebSocketModule(); 

    // ... other initialization ...

    // Register your plugin with OBS
    obs_register_module(data);
    return true;
}

void obs_module_unload(void)
{
    struct my_websocket_plugin_data *data = (struct my_websocket_plugin_data *)obs_get_module();

    // Clean up UI elements
    // ...

    // Clean up WebSocket module
    delete data->webSocketModule;

    // ... other cleanup ...

    bfree(data);
}
