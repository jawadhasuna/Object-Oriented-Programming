#include <iostream>
#include <cstring>  
using namespace std;
class date {
public:
    int yy, mm, dd;
    date() : yy(0), mm(0), dd(0) {}
    date(int d, int m, int y) : yy(y), mm(m), dd(d) {}
};

class time {
public:
    int hh, mm;
    time() : hh(0), mm(0) {}
    time(int h, int m) : hh(h), mm(m) {}
};

class location {
public:
    double latitude, longitude;
    location() : latitude(0.0), longitude(0.0) {}
};

class prayer {
public:
    char name[20];
    date today;
    time starttime;
    prayer() {}
    prayer(const char* n, date t, time s) : today(t), starttime(s) {
        strcpy(name, n);
    }
};

class prayertime {
public:
    location loc;
    prayer prayers[7];

    void getloc() {
        cout << "Please Enter Your Location:\nEnter Latitude and Longitude: ";
        cin >> loc.latitude >> loc.longitude;
    }

    void showloc() {
        cout << "Your Location Latitude and Longitude: ";
        cout << loc.latitude << " " << loc.longitude << endl;
    }

    void gettime() {
        cout << "Enter year, month, and date: ";
        cin >> prayers[0].today.yy >> prayers[0].today.mm >> prayers[0].today.dd;

        strcpy(prayers[0].name, "fajr");
        strcpy(prayers[1].name, "sunrise");
        strcpy(prayers[2].name, "dhuhr");
        strcpy(prayers[3].name, "asr");
        strcpy(prayers[4].name, "sunset");
        strcpy(prayers[5].name, "maghrib");
        strcpy(prayers[6].name, "isha");

        cout << "Enter fajr time (hh mm): ";
        cin >> prayers[0].starttime.hh >> prayers[0].starttime.mm;

        cout << "Enter sunrise time: ";
        cin >> prayers[1].starttime.hh >> prayers[1].starttime.mm;

        cout << "Enter dhuhr time: ";
        cin >> prayers[2].starttime.hh >> prayers[2].starttime.mm;

        cout << "Enter asr time: ";
        cin >> prayers[3].starttime.hh >> prayers[3].starttime.mm;

        cout << "Enter sunset time: ";
        cin >> prayers[4].starttime.hh >> prayers[4].starttime.mm;

        cout << "Enter maghrib time: ";
        cin >> prayers[5].starttime.hh >> prayers[5].starttime.mm;

        cout << "Enter isha time: ";
        cin >> prayers[6].starttime.hh >> prayers[6].starttime.mm;
    }

    void showtime() {
        cout << "Date: ";
        cout << prayers[0].today.dd << "/" << prayers[0].today.mm << "/" << prayers[0].today.yy << endl;

        for (int i = 0; i < 7; i++) {
            cout << prayers[i].name << " time: "
                 << prayers[i].starttime.hh << ":"
                 << (prayers[i].starttime.mm < 10 ? "0" : "")  // zero-padding
                 << prayers[i].starttime.mm << endl;
        }
    }
};

int main() {
    prayertime p;
    p.getloc();
    p.gettime();
    p.showloc();
    p.showtime();
    return 0;
}