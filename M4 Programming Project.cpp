//This is the Parking Ticket SubBranch//
#include "parkedcar.h"
#include <iostream>

int main()
{
	ParkedCar car1("Toyota", "Camry", "Red", "ABC123", 120);

	cout << car1.getMake() << endl;
	cout << car1.getModel() << endl;
	cout << car1.getColor() << endl;
	cout << car1.getLicense() << endl;
	cout << car1.getMinutes() << endl;

	return 0;
}