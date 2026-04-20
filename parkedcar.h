#ifndef PARKEDCARHEADER_H
#define PARKEDCARHEADER_H
#include <string>

// This is the Header File, containing Prototypes for all Member Functions and the ParkedCar Class itself //
class ParkedCar {
private:
    std::string make;
    std::string model;
    std::string color;
    std::string licenseNumber;
    int minutesParked;
public:
    // Constructor //
    ParkedCar(std::string make, std::string model, std::string color, std::string license, int minutes);

    // Function Prototypes/Documentation //
    const std::string& getMake() const;
    const std::string& getModel() const;
    const std::string& getColor() const;
    const std::string& getLicense() const;
    const int getMinutes() const;

};

#endif
