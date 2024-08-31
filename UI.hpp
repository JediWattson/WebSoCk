// In your plugin's header file (e.g., mywebsocketplugin.hpp)
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>

class MyWebSocketPlugin : public obs_module_t {
    // ... other plugin code ...

private:
    QWidget *settingsWidget;
    QLineEdit *urlLineEdit;
    QPushButton *connectButton;

    void connectButtonClicked(); // Slot to handle button click
};

