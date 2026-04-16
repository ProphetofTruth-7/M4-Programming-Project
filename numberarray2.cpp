#include "numberarray2.h"
#include <iostream>
using namespace std;

NumberArray::NumberArray(int s) : size(s), data(nullptr) {
    data = new double[s];

    for (int i = 0; i < s; i++) {
        data[i] = 0.0;
    }
}

NumberArray::NumberArray(const NumberArray& other) : size(other.size), data(nullptr) {
    data = new double[size];

    for (int i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
}

NumberArray& NumberArray::operator=(const NumberArray& other) {
    if (this == &other) { //check for self-assignment
        return *this;
    }
  
    if (size != other.size) {
        delete[] data; //release existing memory
        size = other.size; // reassign size(not included)
        data = new double[size]; //allocate new memory
    }

    for (int i = 0; i < size; ++i) { //copy all values
        data[i] = other.data[i];
    }

    return *this; //return this
}

NumberArray::~NumberArray() {
    delete[] data;
    cout << "Memory has been cleared" << endl;
}

void NumberArray::setNumber(int index, double value) {
    if (index >= 0 && index < size) {
        data[index] = value;
    }
}

void NumberArray::setSize(int x) {
        size = round(x);
}

int NumberArray::getSize() const {
    return size;
}

double NumberArray::getNumber(int index) const {
    if (index > -1 && index < size) {
        return data[index];
    }
    else {
        return 0;
        cout << "Invalid Index(out of bounds)" << endl;
    }
}

double NumberArray::getMin() const {
    double minimum = data[0];

    for (int i = 1; i < size; i++) {
        if (data[i] < minimum) {
            minimum = data[i];
        }
    }
    return minimum;
}

double NumberArray::getMax() const {
    double maximum = data[0];

    for (int i = 1; i < size; i++) {
        if (data[i] > maximum) {
            maximum = data[i];
        }
    }
    return maximum;
}

double NumberArray::getAverage() const {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

void NumberArray::print() const {

    cout << endl;
    cout << "The Minimum Value is: " << getMin() << endl;
    cout << "The Maximum Value is: " << getMax() << endl;
    cout << "The Average Value is: " << getAverage() << endl;
    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}