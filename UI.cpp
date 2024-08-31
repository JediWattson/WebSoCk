// In your plugin's implementation file (e.g., mywebsocketplugin.cpp)
WebsoCk::WebSoCk() {
    // ... other plugin initialization ...

    // Create settings widget
    settingsWidget = new QWidget();
    // ... set layout, add other UI elements if needed ...

    // Create text field
    urlLineEdit = new QLineEdit(settingsWidget);
    // ... set position, size, placeholder text, etc. ...

    // Create connect button
    connectButton = new QPushButton("Connect", settingsWidget);
    // ... set position, size, etc. ...
    connect(connectButton, &QPushButton::clicked, this, &MyWebSocketPlugin::connectButtonClicked);

    // ... register settings widget with OBS ...
}

void WebSoCk::connectButtonClicked() {
    QString url = urlLineEdit->text();
    // ... validate URL, establish WebSocket connection ...
}
