#include "parkingticket.h"
#include <cmath>
using namespace std;


ParkingTicket::ParkingTicket(const ParkedCar& car, const ParkingMeter& meter)
{
    // copy snapshot data from car and meter
    licenseNumber = car.getLicense();
    make = car.getMake();
    model = car.getModel();
    minutesParked = car.getMinutes();
    minutesBought = meter.getMinutes();

    if (minutesParked <= minutesBought) {
        fine = 0;
    }
    else {
        int minutesOver = minutesParked - minutesBought;
        fine = 25 + 10 * ceil(minutesOver / 60.0);
    }
}

int ParkingTicket::getFine() const { return fine; }

const string& ParkingTicket::getLicenseNumber() const { 
    return licenseNumber; 
}

const string& ParkingTicket::getMake() const {
    return make; 
}

const string& ParkingTicket::getModel() const { 
    return model; 
}

int ParkingTicket::getMinutesParked() const { 
    return minutesParked; 
}

int ParkingTicket::getMinutesBought() const { 
    return minutesBought; 
}
