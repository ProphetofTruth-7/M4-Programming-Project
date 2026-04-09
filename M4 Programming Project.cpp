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

    cout << "What is the Year(current or chosen): ";
    cin >> userReply;
    calendar.setYear(userReply);
    cout << "What is the Month(current or chosen): ";
    cin >> userReply;
    calendar.setMonth(userReply);
    cout << "What is the Day(current or chosen): ";
    cin >> userReply;
    calendar.setDay(userReply);

    cout << endl;

    calendar.numericalPrint();
    calendar.monthNormPrint();
    calendar.monthAltPrint();

    cout << endl;

    Date value3(calendar.getMonth(), calendar.getDay(), calendar.getYear(), calendar.getMonthName());
    calendar = ++calendar;
    cout << "Tomorrow's Date is: ";
    calendar.monthNormPrint();

    calendar = --calendar;
    cout << "Yesterday's Date was: ";
    calendar.monthNormPrint();

    return 0;
}
