#ifndef PARKEDCARHEADER_H
#define PARKEDCARHEADER_H
#include <string>
using namespace std;

// This is the Header File, containing Prototypes for all Member Functions and the ParkedCar Class itself //
class ParkedCar {
private:
    string make;
    string model;
    string color;
    string licenseNumber;
    int minutesParked;
public:
    // Constructor //
    ParkedCar(string make, string model, string color, string license, int minutes);

    // Function Prototypes/Documentation //
    const string& getMake();
    const string& getModel();
    const string& getColor();
    const string& getLicense();
    int getMinutes();

};

#endif
