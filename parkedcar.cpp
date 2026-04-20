#include "parkedcar.h"
#include <iostream>
#include <string>
using namespace std;

ParkedCar::ParkedCar(string make, string model, string color, string license, int minutes) : make(make), model(model), color(color), licenseNumber(license), minutesParked(minutes) {}

const string& ParkedCar::getMake()  { 
	return make; 
}

const string& ParkedCar::getModel() { 
	return model; 
}

const string& ParkedCar::getColor() { 
	return color; 
}

const string& ParkedCar::getLicense() { 
	return licenseNumber; 
}

int ParkedCar::getMinutes() { 
	return minutesParked; 
}
