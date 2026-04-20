#include "parkedcar.h"
#include <iostream>
#include <string>
using namespace std;

ParkedCar::ParkedCar(string make, string model, string color, string license, int minutes) : make(make), model(model), color(color), licenseNumber(license), minutesParked(minutes) {}

const string& ParkedCar::getMake() const{ 
	return make; 
}

const string& ParkedCar::getModel() const{ 
	return model; 
}

const string& ParkedCar::getColor() const{ 
	return color; 
}

const string& ParkedCar::getLicense() const{ 
	return licenseNumber; 
}

const int ParkedCar::getMinutes() const{ 
	return minutesParked; 
}
