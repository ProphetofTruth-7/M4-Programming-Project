#include "parkingmeter.h"
using namespace std;

ParkingMeter::ParkingMeter(int minutes) : minutesBought(minutes) {}

const int ParkingMeter::getMinutes() const{
    return minutesBought;
}