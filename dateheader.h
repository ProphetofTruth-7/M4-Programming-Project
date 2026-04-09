#ifndef DATEHEADER_H
#define DATEHEADER_H
#include <string>
using namespace std;

// This is the Header File, containing Prototypes for all Member Function and the Class itself //

/*
 * getDay
 * ------------------------------------------------------------
 * Returns the current state of the Day variable
 *
 * Inputs:
 *   None
 * Outputs:
 *   day            - A valid integer that corresponds to a current day of the current month value. Will wither be a valid, change value or the default
 *
 * Preconditions:
 *   - The day integer exists and has a coutable value
 *
 * Postconditions:
 *   - day is returned directly to the calling point
 */
class Date {
private:
    int month;
    int day;
    int year;
    string monthName;
public:
    // Constructor //
    Date(int m, int d, int y, string n);

    // Function Prototypes/Documentation //
 /*
 * setMonth
 * ------------------------------------------------------------
 * Sets the variable month to default value unless given a valid value(1-12)
 *
 * Inputs:
 *   m              - A integer variable given directly or via User input
 * Outputs:
 *   month          - A valid integer that corresponds to a calendar. If given input was invalid, resorts to default given by Constructor
 *   setMonthname   - A function called that gives the name of the given integer or its resorted default
 *
 * Preconditions:
 *   - Contructor Default exists and is itself valid
 *
 * Postconditions:
 *   - month is either a valid integer corresponding to the calendar or the default value
 *   - setMonthName is ran immediately following setMonth
 */
    void setMonth(int m);

    /*
    * setMonthName
    * ------------------------------------------------------------
    * Sets the variable monthName to string corresponding to the current month value
    *
    * Inputs:
    *   month          - An extant integer variable, formalized by the calling of the setMonth function
    * Outputs:
    *   monthName      - A string that corresponds to a calendar month.
    *
    * Preconditions:
    *   - setMonth has already run(whether it defaulted or not is inconsequential)
    *
    * Postconditions:
    *   - monthName is a string corresponding to the calendar and the current month value(if valid) or default value
    */
    void setMonthName();

    /*
     * setYear
     * ------------------------------------------------------------
     * Sets the variable year to default value unless given a valid value(>-1)
     *
     * Inputs:
     *   y              - A integer variable given directly or via User input
     * Outputs:
     *   year          - A valid integer greater than 0. If given input was invalid, resorts to default given by Constructor
     *
     * Preconditions:
     *   - Contructor Default exists and is itself valid
     *
     * Postconditions:
     *   - year is either a valid integer greater than 0 or the default value
     */
    void setYear(int y);

    /*
     * setDay
     * ------------------------------------------------------------
     * Sets the variable day to default value unless given a valid value above 0 and below an upper limit given by the called function lastDay
     *
     * Inputs:
     *   d              - A integer variable given directly or via User input
     * Outputs:
     *   day            - A valid integer that corresponds to a calendar. If given input was invalid, resorts to default given by Constructor. Falls within a limit set by the function lastDay
     *   lastDay        - A function called that declares the upper limit that a given d value cannot breach
     *
     * Preconditions:
     *   - Contructor Default exists and is itself valid
     *   - Function lastDay exists
     *
     * Postconditions:
     *   - day is either a valid integer that falls within a calendarilly respective limit or the default value
     *   - lastDay is ran immediately following setDay
     */
    void setDay(int d);

    /*
     * lastDay()
     * ------------------------------------------------------------
     * Returns the upper limit in days of a given month value
     *
     * Inputs:
     *   month          - The private integer variable
     * Outputs:
     *   Upper Limit    - A valid integer that corresponds to the last day of the given month
     *   isLeapYear     - A function called only if the month == 2 in which the state of the year(if its a leap year) is checked and the Upper Limit is altered as needed
     *
     * Preconditions:
     *   - setYear has been run or the default is the expected variable
     *   - isLeapYear exists if the month == 2
     *
     * Postconditions:
     *   - An integer value of 31, 30, 29, or 28 is returned to the setDay function according to neccessity
     *   - isLeapYear is run immediately afterwards if the month == 2
     */
    int lastDay();

    /*
     * lastDay(arbitrary)
     * ------------------------------------------------------------
     * Returns the upper limit in days of a arbitrary month value
     *
     * Inputs:
     *   testyVar       - An arbitrary, easily accessible integer value that corresponds to the months of the calendar
     * Outputs:
     *   Upper Limit    - A valid integer that corresponds to the last day of the arbitrary month
     *   isLeapYear     - A function called only if the arbitrary month == 2 in which the state of the year(if its a leap year) is checked and the Upper Limit is altered as needed
     *
     * Preconditions:
     *   - testyVar is a valid integer within the range 1-12
     *   - isLeapYear exists if the month == 2
     *
     * Postconditions:
     *   - An integer value of 31, 30, 29, or 28 is returned according to neccessity
     *   - isLeapYear is run immediately afterwards if the month == 2
     */
    int lastDay(int testyVar);

    /*
     * isLeapYear()
     * ------------------------------------------------------------
     * Returns a true or false boolean depending on if the given year is a leap year(true) or not(false)
     *
     * Inputs:
     *   year          - The private integer variable
     * Outputs:
     *   Boolean        - A boolean dependent on the state of the given year
     *
     * Preconditions:
     *   - lastDay has been called
     *
     * Postconditions:
     *   - A value of true or false has been returned to lastDay, permitting it to finish its calculations
     */
    bool isLeapYear();

    /*
     * isLeapYear(arbitrary)
     * ------------------------------------------------------------
     * Returns a true or false boolean depending on if the given value is a leap year(true) or not(false)
     *
     * Inputs:
     *   testyVar       - An arbitrary, easily accessible integer value that corresponds to a certain year
     * Outputs:
     *   Boolean        - A boolean dependent on the state of the given value
     *
     * Preconditions:
     *   - testyVar is a valid integer above 0
     *
     * Postconditions:
     *   - A value of true or false has been returned for use as neccessary
     */
    bool isLeapYear(int testyVar);

    /*
     * getDay
     * ------------------------------------------------------------
     * Returns the current state of the day variable
     *
     * Inputs:
     *   None
     * Outputs:
     *   day            - A valid integer that corresponds to a current day of the current month value. Will either be a valid, changed value or the default
     *
     * Preconditions:
     *   - The day integer exists and has a coutable value
     *
     * Postconditions:
     *   - day is returned directly to the calling point
     */
    int getDay() const;

    /*
     * getMonth
     * ------------------------------------------------------------
     * Returns the current state of the month variable
     *
     * Inputs:
     *   None
     * Outputs:
     *   month          - A valid integer that corresponds to a current month of the current year value. Will either be a valid, changed value or the default
     *
     * Preconditions:
     *   - The month integer exists and has a coutable value
     *
     * Postconditions:
     *   - month is returned directly to the calling point
     */
    int getMonth() const;

    /*
     * getYear
     * ------------------------------------------------------------
     * Returns the current state of the year variable
     *
     * Inputs:
     *   None
     * Outputs:
     *   year          - A valid integer that corresponds to the current year. Will either be a valid, changed value or the default
     *
     * Preconditions:
     *   - The year integer exists and has a coutable value
     *
     * Postconditions:
     *   - year is returned directly to the calling point
     */
    int getYear() const;

    /*
     * getMonthName
     * ------------------------------------------------------------
     * Returns the current state of the monthName variable
     *
     * Inputs:
     *   None
     * Outputs:
     *   monthName          - A valid string that corresponds to a current month value
     *
     * Preconditions:
     *   - The monthName string exists and has a coutable value
     *
     * Postconditions:
     *   - monthName is returned directly to the calling point
     */
    string getMonthName() const;

    /*
     * numericalPrint
     * ------------------------------------------------------------
     * Prints out the day, month, year in fully numerical format
     *
     * Inputs:
     *   day                - The private integer variable that denotes the days of a calendar month
     *   month              - The private integer variable that denotes the months of a calendar year
     *   year               - The private integer variable that denotes the Gregorian Year
     * Outputs:
     *   Collated Report    - A formatted report that lists the current values of the day, month, and year variables
     *
     * Preconditions:
     *   - The day, month, and year values have extant values, either unique or default
     *
     * Postconditions:
     *   - A report is printed(month/day/year)
     */
    void numericalPrint();

    /*
     * monthNormPrint
     * ------------------------------------------------------------
     * Prints out the day, monthName, year in fully mixed format with monthName first
     *
     * Inputs:
     *   day                - The private integer variable that denotes the days of a calendar month
     *   monthName          - The private string variable that denotes the months of a calendar year in a alphabetical sense
     *   year               - The private integer variable that denotes the Gregorian Year
     * Outputs:
     *   Collated Report    - A formatted report that lists the current values of the day, monthName, and year variables
     *
     * Preconditions:
     *   - The day, monthName, and year values have extant values, either unique or default
     *
     * Postconditions:
     *   - A report is printed(monthName day, year)
     */
    void monthNormPrint();

    /*
     * monthAltPrint
     * ------------------------------------------------------------
     * Prints out the day, monthName, year in fully mixed format with day first
     *
     * Inputs:
     *   day                - The private integer variable that denotes the days of a calendar month
     *   monthName          - The private string variable that denotes the months of a calendar year in a alphabetical sense
     *   year               - The private integer variable that denotes the Gregorian Year
     * Outputs:
     *   Collated Report    - A formatted report that lists the current values of the day, monthName, and year variables
     *
     * Preconditions:
     *   - The day, monthName, and year values have extant values, either unique or default
     *
     * Postconditions:
     *   - A report is printed(day monthName year)
     */
    void monthAltPrint();

    Date& operator++();
    Date& operator--();
};
#endif
