//This is the Parking Ticket SubBranch//
#include "parkedcar.h"
#include "parkingmeter.h"
#include "parkingticket.h"
#include <iostream>

int main()
{
	ParkedCar car1("Dodge", "Charger", "Blue", "B8KERBY", 120);
	ParkingMeter meter(200);
	ParkingTicket ticket(car1, meter);

	

	return 0;
}