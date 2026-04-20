#ifndef PARKINGTICKETHEADER_H
#define PARKINGTICKETHEADER_H
#include <string>
#include "parkedcar.h"
#include "parkingmeter.h"
#include "policeofficer.h"

class ParkingTicket {
private:
    int fine;
    std::string licenseNumber;
    std::string make;
    std::string model;
    std::string color;
    int minutesParked;
    int minutesBought;
    std::string officerName;
    int officerNumber;
public:
    ParkingTicket(const ParkedCar& car, const ParkingMeter& meter, const PoliceOfficer& officer);

    int getFine() const;
    const std::string getLicenseNumber() const;
    const std::string getMake() const;
    const std::string getColor() const;
    const std::string getModel() const;
    int getMinutesParked() const;
    int getMinutesBought() const;
    const std::string getOfficerName() const;
    const int getOfficerNumber() const;

    const void issueTicket() const;
};

#endif
