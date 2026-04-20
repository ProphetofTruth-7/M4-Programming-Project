#ifndef PARKINGTICKETHEADER_H
#define PARKINGTICKETHEADER_H
using namespace std;
#include <string>
#include "parkedcar.h"
#include "parkingmeter.h"

class ParkingTicket {
private:
    int fine;
    string licenseNumber;
    string make;
    string model;
    int minutesParked;
    int minutesBought;
public:
    ParkingTicket(const ParkedCar& car, const ParkingMeter& meter);

    int getFine() const;
    const string& getLicenseNumber() const;
    const string& getMake() const;
    const string& getModel() const;
    int getMinutesParked() const;
    int getMinutesBought() const;
};

#endif
