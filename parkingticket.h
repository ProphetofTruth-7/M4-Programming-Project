#ifndef PARKINGTICKETHEADER_H
#define PARKINGTICKETHEADER_H
using namespace std;

// This is the Header File, containing Prototypes for all Member Functions and the ParkingTicket Class itself //
class ParkingTicket {
private:
    int minutesParked;
public:
    // Constructor //
    ParkingTicket(int minutes);

    // Function Prototypes/Documentation //
    int getMinutes();

};

#endif
