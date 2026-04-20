#ifndef POLICEOFFICERHEADER_H
#define POLICEOFFICERHEADER_H
#include "parkingmeter.h"
#include "parkedcar.h"
#include "parkingticket.h"

// This is the Header File, containing Prototypes for all Member Functions and the PoliceOfficer Class itself //
class PoliceOfficer {
private:
    string officerName;
    int officerNumber;
public:
    // Constructor //
    PoliceOfficer(string name, int number);

    // Function Prototypes/Documentation //
    const string getOfficerName() const;
    const int getOfficerNumber() const;

    const void checkParking(const ParkedCar& car, const ParkingMeter& meter, const ParkingTicket& ticket) const;

};

#endif
