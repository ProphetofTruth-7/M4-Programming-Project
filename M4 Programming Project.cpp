// This is the NumberArray2 Subproject

#include "numberarray2.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    NumberArray userarray(MAX_SIZE);

    cout << "Please enter the size of your array! " << endl;
    int userSize = 0;
    do { 
        cin >> userSize;
        if (userSize < 1 || userSize > MAX_SIZE) {
            cout << "Invalid size! Please enter a number between 1 and " << MAX_SIZE << endl;
        }
	} while (round(userSize) < 1 || round(userSize) > MAX_SIZE);
    userarray.setSize(userSize);

    cout << "Filling the Dynamic Array! Please enter your chosen number, then press enter" << endl;
    double userChoice = 0;

    for (int d = 0; d < userarray.getSize(); d++) {
        cin >> userChoice;
        userarray.setNumber(d, userChoice);
    }

    userarray.print();

    cout << endl;
    cout << endl;
    cout << endl;

    NumberArray userarray3 = userarray;
    cout << "A copy of the First Array has been created! Here are it's values: " << endl;
    userarray2.print();

    return 0;
}