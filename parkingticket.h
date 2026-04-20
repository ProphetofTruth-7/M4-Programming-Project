#ifndef PARKINGTICKETHEADER_H
#define PARKINGTICKETHEADER_H
using namespace std;
#include <string>
#include "parkedcar.h"
#include "parkingmeter.h"
#include "policeofficer.h"

class ParkingTicket {
private:
    int fine;
    string licenseNumber;
    string make;
    string model;
    string color;
    int minutesParked;
    int minutesBought;
    string officerName;
    int officerNumber;
public:
    ParkingTicket(const ParkedCar& car, const ParkingMeter& meter, const PoliceOfficer& officer);

    int getFine() const;
    const string getLicenseNumber() const;
    const string getMake() const;
    const string getColor() const;
    const string getModel() const;
    int getMinutesParked() const;
    int getMinutesBought() const;
    const string getOfficerName() const;
    const int getOfficerNumber() const;

    const void issueTicket() const;
};

#endif
