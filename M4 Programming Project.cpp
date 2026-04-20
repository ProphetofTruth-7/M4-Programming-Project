//This is the Parking Ticket SubBranch//
#include "parkedcar.h"
#include "parkingmeter.h"
#include "parkingticket.h"
#include <iostream>

int main()
{
	ParkedCar car1("Dodge", "Charger", "Blue", "B8KERBY", 60);
	ParkingMeter meter(60);
	ParkingTicket ticket(car1, meter);

	cout << "The is your current fine: $" << ticket.getFine() << endl;

	return 0;
}