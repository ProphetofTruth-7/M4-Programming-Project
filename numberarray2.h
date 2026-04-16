#ifndef NUMBERARRAY2_H
#define NUMBERARRAY2_H
#include <iostream>
#include <cmath>
using namespace std;

int const MAX_SIZE = 30;

class NumberArray {
private:
    int size;
    double* data;
public:
    // Constructor //
    NumberArray(int s);

    // Copy Constructor //
    NumberArray(const NumberArray& other);

    // Copy Assignment Operator //
    NumberArray& operator=(const NumberArray& other);

    // Deconstructor //
    ~NumberArray();

    // Function Prototypes/Documentation //
/*
* setNumber
* ------------------------------------------------------------
* Validates the given index value, then sets that index of the dynamic array to the given value
*
* Inputs:
*   index          - An integer variable that corresponds to a specific index of the dynamic array that the user wishes to alter
*   value          - A double variable given by the user that is stored into the dynamic array
* Outputs:
*   None
*
* Preconditions:
*   - The dynamic array already exists and is dynamic
*
* Postconditions:
*   - The specified index is filled with the given value
*/
    void setNumber(int index, double value);

    /*
    * setSize
    * ------------------------------------------------------------
    * Validates the given, rounded value(bigger than 0), then sizes the dynamic array's size
    *
    * Inputs:
    *   x              - An integer variable given by the user that declares the size of the array
    * Outputs:
    *   size           - The private integer value(technically)
    *
    * Preconditions:
    *   - The dynamic array already exists and is dynamic
    *   - The index supplied is valid
    *
    * Postconditions:
    *   - The size variable is changed according to the desire of the user
    */
    void setSize(int x);
    /*
     * getSize
     * ------------------------------------------------------------
     * Returns the size of the dynamic array
     *
     * Inputs:
     *   None
     * Outputs:
     *   size           - The private integer value
     *
     * Preconditions:
     *   - size is an extant variable
     *
     * Postconditions:
     *   - size is returned directly to the function call
     */
    int getSize() const;
    /*
     * getNumber
     * ------------------------------------------------------------
     * Returns the value at a specified index of the dynamic array
     *
     * Inputs:
     *   index          - An integer variable that corresponds to a specific index of the dynamic array that the user wishes to return
     * Outputs:
     *   data[index]    - The specific value at the given index of the dynamic array
     *
     * Preconditions:
     *   - The index supplied is valid
     *   - The dynamic array already exists and is dynamic
     *
     * Postconditions:
     *   - The value at the specified index is returned directly to the function call
     */
    double getNumber(int index) const;
    /*
     * getMin
     * ------------------------------------------------------------
     * Gathers all values within the dynamic array, then returns the minimum value
     *
     * Inputs:
     *   None
     * Outputs:
     *   minimum        - A double value that is equivalent to the smallest value within the dynamic array
     *
     * Preconditions:
     *   - The dynamic array exists and contains at least 1 valid value
     *
     * Postconditions:
     *   - The minimum value is returned directly to the function call
     */
    double getMin() const;
    /*
     * getMax
     * ------------------------------------------------------------
     * Gathers all values within the dynamic array, then returns the maximum value
     *
     * Inputs:
     *   None
     * Outputs:
     *   maximum        - A double value that is equivalent to the largest value within the dynamic array
     *
     * Preconditions:
     *   - The dynamic array exists and contains at least 1 valid value
     *
     * Postconditions:
     *   - The maximum value is returned directly to the function call
     */
    double getMax() const;
    /*
     * getAverage
     * ------------------------------------------------------------
     * Gathers all values within the dynamic array, then calculates the average of them
     *
     * Inputs:
     *   None
     * Outputs:
     *   sum/size       - A double value that is equivalent to the sum of all values within the dynamic array divided by its size
     *
     * Preconditions:
     *   - The dynamic array exists and contains at least 1 valid value
     *
     * Postconditions:
     *   - The average value is returned directly to the function call
     */
    double getAverage() const;
    /*
     * print
     * ------------------------------------------------------------
     * Prints every index within the dynamic array and runs the getMin, getMax, and getAverage Functions
     *
     * Inputs:
     *   None
     * Outputs:
     *   Collated Report     - A full list of all values stored within the dynamic array, and the minimum, maximum, and average as well
     *
     * Preconditions:
     *   - The dynamic array exists and contains at least 1 valid value
     *   - getMin(), getMax(), and getAverage() are all extant and functional
     *
     * Postconditions:
     *   - Every valid value, minimum, maximum, and average within the dynamic array is printed
     */
    void print() const;

};

#endif
