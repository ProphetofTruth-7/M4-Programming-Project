#include "policeofficer.h"


PoliceOfficer::PoliceOfficer(string name, int number) : officerName(name), officerNumber(number) {}

const string PoliceOfficer::getOfficerName() const {
	return officerName;
}

const int PoliceOfficer::getOfficerNumber() const {
	return officerNumber;
}

const void PoliceOfficer::checkParking(const ParkedCar& car, const ParkingMeter& meter) const {
	if (meter.getMinutes() >= car.getMinutes()) {
		//Valid Parking, No Ticket
	}
	else {
		//Invalid Parking
	}
}