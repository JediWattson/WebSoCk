#include <obs-module.h>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include "plugin.hpp" // Include your module header

struct web_soCk {
    // ... other plugin data ...

    // UI elements
    QWidget *settingsWidget;
    QLineEdit *urlLineEdit;
    QPushButton *connectButton;

    // WebSocket module instance
    MyWebSocketModule webSocketModule;
};

// ... other plugin functions ...

void MyWebSocketPlugin::connectButtonClicked() {
    QString url = urlLineEdit->text();
    // ... validate URL ...

    webSocketModule.connect(url.toStdString()); // Call module function to connect
}

