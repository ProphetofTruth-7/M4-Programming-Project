#include "parkingmeter.h"
using namespace std;

ParkingMeter::ParkingMeter(int minutes) : minutesBought(minutes) {}

int ParkingMeter::getMinutes() {
    return minutesBought;
}