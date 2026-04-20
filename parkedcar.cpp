#include "parkedcar.h"
#include <iostream>
#include <string>
using namespace std;

ParkedCar::ParkedCar(string make, string model, string color, string license, int minutes) : make(make), model(model), color(color), licenseNumber(license), minutesParked(minutes) {}
