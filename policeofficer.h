#ifndef POLICEOFFICERHEADER_H
#define POLICEOFFICERHEADER_H
#include "parkingmeter.h"
#include "parkedcar.h"
#include <string>

// This is the Header File, containing Prototypes for all Member Functions and the PoliceOfficer Class itself //
class PoliceOfficer {
private:
    std::string officerName;
    int officerNumber;
public:
    // Constructor //
    PoliceOfficer(std::string name, int number);

    // Function Prototypes/Documentation //
    const std::string getOfficerName() const;
    const int getOfficerNumber() const;

    void checkParking(const ParkedCar& car, const ParkingMeter& meter, const ParkingTicket& ticket) const;

};

#endif
