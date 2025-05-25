#include<iostream>
using namespace std;

class device {
protected:
    string name;
    bool status;
public:
    device() { name = ""; status = false; }
    device(string n) { name = n; status = false; }
    virtual void performFunction() {
        cout << name << ": Base device performing generic function." << endl;
    }
    void displayStatus() {
        cout << name << " is " << (status ? "ON" : "OFF") << endl;
    }
};

class light : public device {
public:
    light(string n) : device(n) {}
    void performFunction() override {
        status = !status;
        cout << "Light " << name << " turned " << (status ? "ON" : "OFF") << endl;
    }
};

class thermostat : public device {
public:
    thermostat(string n) : device(n) {}
    void performFunction() override {
        cout << "Thermostat " << name << " adjusted temperature." << endl;
    }
};

class doorlock : public device {
public:
    doorlock(string n) : device(n) {}
    void performFunction() override {
        status = !status;
        cout << "DoorLock " << name << (status ? " locked." : " unlocked.") << endl;
    }
};

class homecontroller {
private:
    device* devices[3];
public:
    homecontroller(device* d1, device* d2, device* d3) {
        devices[0] = d1;
        devices[1] = d2;
        devices[2] = d3;
    }
    void controlAllDevices() {
        for (int i = 0; i < 3; i++) {
            devices[i]->performFunction();
        }
    }
    void showStatus() {
        for (int i = 0; i < 3; i++) {
            devices[i]->displayStatus();
        }
    }
};

int main() {
    light l1("Living Room Light");
    thermostat t1("Hall Thermostat");
    doorlock d1("Main Door");
    homecontroller hc(&l1, &t1, &d1);
    cout << "\nInitial Status:\n";
    hc.showStatus();
    cout << "\nActivating all devices:\n";
    hc.controlAllDevices();
    cout << "\nStatus after activation:\n";
    hc.showStatus();
    return 0;
}
