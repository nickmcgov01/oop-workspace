// USBConnection.h

#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
#include <memory>

class USBConnection {
private:
    int ID;
    static std::stack<int> ids;
    explicit USBConnection(int id) : ID(id) {}

public:
    ~USBConnection() {
        ids.push(ID);
    }

    static std::unique_ptr<USBConnection> CreateUsbConnection() {
        if (!ids.empty()) {
            int id = ids.top();
            ids.pop();
            return std::make_unique<USBConnection>(id);
        } else {
            return nullptr;
        }
    }

    int get_id() const {
        return ID;
    }
};

std::stack<int> USBConnection::ids({3, 2, 1});

#endif // USBCONNECTION_H
