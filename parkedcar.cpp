#include "parkedcar.h"
#include <iostream>
#include <string>

ParkedCar::ParkedCar(std::string make, std::string model, std::string color, std::string license, int minutes) : make(make), model(model), color(color), licenseNumber(license), minutesParked(minutes) {}

const std::string& ParkedCar::getMake() const{
	return make; 
}

const std::string& ParkedCar::getModel() const{
	return model; 
}

const std::string& ParkedCar::getColor() const{
	return color; 
}

const std::string& ParkedCar::getLicense() const{
	return licenseNumber; 
}

const int ParkedCar::getMinutes() const{ 
	return minutesParked; 
}
