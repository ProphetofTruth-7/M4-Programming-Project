#include "parkingmeter.h"

ParkingMeter::ParkingMeter(int minutes) : minutesBought(minutes) {}

const int ParkingMeter::getMinutes() const{
    return minutesBought;
}