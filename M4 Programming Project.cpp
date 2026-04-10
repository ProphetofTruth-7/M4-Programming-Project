/*
 * Date Class Subproject
 * ------------------------------------------------------------
 * This program recieves the User's input in regards to a chosen year, month, and day. It validates the given value and, if invalid, returns a default value for use.
 *
 * Upon validation, it prints three different methodologies for date reading.
 *
 * The program relies upon attached Header and .cpp files, and is a OOP work.
 *

 */

#include "dateheader.h"
#include <iostream>
using namespace std;

int main()
{
    Date calendar(1, 1, 1900, "Janurary");

    int userReply = 0;

    cout << "What is the Month, Day, and Year(Current or Chosen, in that order): ";
    cin >> calendar;

    cout << endl;

    calendar.numericalPrint();
    cout << calendar;
    calendar.monthAltPrint();

    cout << endl;

    Date AltCalendar(4, 9, 2025, "April");
    int between = calendar - AltCalendar;

    calendar = ++calendar;
    cout << "Tomorrow's Date is: ";
    cout << calendar;

    calendar = --calendar;
    cout << "Yesterday's Date was: ";
    cout << calendar;

    cout << "The number of days between your chosen date and April 9th, 2025 is: " << between << endl;

    return 0;
}
