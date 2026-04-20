#include "parkingticket.h"
#include <cmath>
#include <iostream>


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

const std::string ParkingTicket::getLicenseNumber() const {
    return licenseNumber; 
}

const std::string ParkingTicket::getMake() const {
    return make; 
}

const std::string ParkingTicket::getColor() const {
    return color;
}

const std::string ParkingTicket::getModel() const {
    return model; 
}

int ParkingTicket::getMinutesParked() const { 
    return minutesParked; 
}

int ParkingTicket::getMinutesBought() const { 
    return minutesBought; 
}

const std::string ParkingTicket::getOfficerName() const {
    return officerName;
}

const int ParkingTicket::getOfficerNumber() const {
    return officerNumber;
}

const void ParkingTicket::issueTicket() const {
    std::cout << "Traffic Ticket" << std::endl;
    std::cout << std::endl;
    std::cout << "Officer Name: " << getOfficerName() << std::endl;
    std::cout << "Officer Badge Number: " << getOfficerNumber() << std::endl;
    std::cout << "Overage(in minutes): " << getMinutesParked() - getMinutesBought() << std::endl;
    std::cout << "Fine: $" << getFine() << std::endl;
    std::cout << std::endl;
    std::cout << "Car Details: " << std::endl;
    std::cout << "Make: " << getMake() << std::endl;
    std::cout << "Model: " << getModel() << std::endl;
    std::cout << "License: " << getLicenseNumber() << std::endl;
    std::cout << "Color: " << getColor() << std::endl;

}
