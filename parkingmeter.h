#ifndef PARKINGMETERHEADER_H
#define PARKINGMETERHEADER_H
using namespace std;

// This is the Header File, containing Prototypes for all Member Functions and the ParkingMeter Class itself //
class ParkingMeter {
private:
    int minutesBought;
public:
    // Constructor //
    ParkingMeter(int minutes);

    // Function Prototypes/Documentation //
    const int getMinutes() const;

};

#endif
