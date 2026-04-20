//This is the Parking Ticket SubBranch//
#include "parkedcar.h"
#include "parkingmeter.h"
#include "parkingticket.h"
#include <iostream>

int main()
{
	ParkedCar car1("Dodge", "Charger", "Blue", "B8KERBY", 60);
	ParkingMeter meter1(60);
	PoliceOfficer officer1("Officer Nelson" , 80085);
	ParkingTicket ticket(car1, meter1, officer1);

	//Start. Officer Nelson needs to read both the car and the meter

	return 0;
}