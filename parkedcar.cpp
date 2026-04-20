#include "parkedcar.h"
#include <iostream>
#include <string>
using namespace std;

ParkedCar::ParkedCar(string make, string model, string color, string license, int minutes) : make(make), model(model), color(color), licenseNumber(license), minutesParked(minutes) {}

string ParkedCar::getMake() {
    return make;
}

string ParkedCar::getModel() {
    return model;
}

string ParkedCar::getColor() {
    return color;
}

string ParkedCar::getLicense() {
    return licenseNumber;
}

int ParkedCar::getMinutes() {
    return minutesParked;
}