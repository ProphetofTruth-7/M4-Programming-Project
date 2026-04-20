// This is the NumberArray2 Subproject

#include "numberarray2.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //ARRAY 1
    NumberArray userarray(MAX_SIZE);

    cout << "Please enter the size of your first array! " << endl;
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

    cout << endl;
    cout << endl;
    cout << endl;

    //ARRAY 2
    NumberArray userarray2(MAX_SIZE);

    cout << "Please enter the size of your second array! " << endl;
    userSize = 0;
    do {
        cin >> userSize;
        if (userSize < 1 || userSize > MAX_SIZE) {
            cout << "Invalid size! Please enter a number between 1 and " << MAX_SIZE << endl;
        }
    } while (round(userSize) < 1 || round(userSize) > MAX_SIZE);
    userarray2.setSize(userSize);

    cout << "Filling the second Dynamic Array! Please enter your chosen number, then press enter" << endl;
    userChoice = 0;

    for (int d = 0; d < userarray2.getSize(); d++) {
        cin >> userChoice;
        userarray2.setNumber(d, userChoice);
    }

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "These are the values of the Second Array: " << endl;
    userarray2.print();

    cout << endl;
    cout << endl;
    cout << endl;

    // COPY CONSTRUCTOR ARRAY
    NumberArray userarray3 = userarray;
    cout << "A copy of the First Array has been created! Here are it's values: " << endl;
    userarray3.print();

    cout << endl;
    cout << endl;
    cout << endl;

    // COPY ASSIGN ARRAY
    userarray2 = userarray;
    cout << "Your First Array's values has been Copy-Assigned to the Second Array. Here are the new Second Array values: " << endl;
    userarray2.print();

    return 0;
}