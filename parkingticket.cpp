#include "parkingticket.h"
#include <cmath>
#include <iostream>
using namespace std;


ParkingTicket::ParkingTicket(const ParkedCar& car, const ParkingMeter& meter, const PoliceOfficer& officer)
{
    licenseNumber = car.getLicense();
    make = car.getMake();
    model = car.getModel();
    minutesParked = car.getMinutes();
    minutesBought = meter.getMinutes();
    officerName = officer.getOfficerName();
    officerNumber = officer.getOfficerNumber();

    if (minutesParked <= minutesBought) {
        fine = 0;
    }
    else {
        int minutesOver = minutesParked - minutesBought;
        fine = 25 + 10 * ceil((minutesOver - 59)/ 60);
    }
}

int ParkingTicket::getFine() const { 
    return fine; 
}

const string ParkingTicket::getLicenseNumber() const { 
    return licenseNumber; 
}

const string ParkingTicket::getMake() const {
    return make; 
}

const string ParkingTicket::getColor() const {
    return color;
}

const string ParkingTicket::getModel() const { 
    return model; 
}

int ParkingTicket::getMinutesParked() const { 
    return minutesParked; 
}

int ParkingTicket::getMinutesBought() const { 
    return minutesBought; 
}

const string ParkingTicket::getOfficerName() const {
    return officerName;
}

const int ParkingTicket::getOfficerNumber() const {
    return officerNumber;
}

const void ParkingTicket::issueTicket() const {
    cout << "Traffic Ticket" << endl;
    cout << endl;
    cout << "Officer Name: " << getOfficerName() << endl;
    cout << "Officer Badge Number: " << getOfficerNumber() << endl;
    cout << "Overage(in minutes): " << getMinutesParked() - getMinutesBought() << endl;
    cout << "Fine: $" << getFine() << endl;
    cout << endl;
    cout << "Car Details: " << endl;
	cout << "Make: " << getMake() << endl;
    cout << "Model: " << getModel() << endl;
    cout << "License: " << getLicenseNumber() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Make: " << getMake() << endl;

}
