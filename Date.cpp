#include "dateheader.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date(int m, int d, int y, string n) : month(m), day(d), year(y), monthName(n) {}

void Date::setMonth(int m) {
    if (m > 0 && m < 13) {
        month = m;
        setMonthName();
    }
    else {
        m = 1;
        month = m;
        setMonthName();
    }
}

void Date::setMonthName() {
    if (month == 1) {
        monthName = "Janurary";
    }
    else if (month == 2) {
        monthName = "Feburary";
    }
    else if (month == 3) {
        monthName = "March";
    }
    else if (month == 4) {
        monthName = "April";
    }
    else if (month == 5) {
        monthName = "May";
    }
    else if (month == 6) {
        monthName = "June";
    }
    else if (month == 7) {
        monthName = "July";
    }
    else if (month == 8) {
        monthName = "August";
    }
    else if (month == 9) {
        monthName = "September";
    }
    else if (month == 10) {
        monthName = "October";
    }
    else if (month == 11) {
        monthName = "November";
    }
    else {
        monthName = "December";
    }
}

void Date::setYear(int y) {
    if (y > -1) {
        year = y;
    }
    else {
        y = 1900;
        year = y;
    }
}

void Date::setDay(int d) {
    if (d > 0 && d < lastDay()) {
        day = d;
    }
    else if (d > 0 && d < lastDay()) {
        day = d;
    }
    else if (d > 0 && d < lastDay()) {
        day = d;
    }
    else if (d > 0 && d < lastDay()) {
        day = d;
    }
    else {
        d = 1;
        day = d;
    }
}

bool Date::isLeapYear() {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool Date::isLeapYear(int testyVar) {
    if (testyVar % 100 == 0) {
        if (testyVar % 400 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (testyVar % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int Date::lastDay() {
    if ((month == 4 || month == 6 || month == 9 || month == 11)) {
        return 31;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 32;
    }
    else if (month == 2 && isLeapYear() == true)
    {
        return 30;
    }
    else
    {
        return 29;
    }

}

int Date::lastDay(int testyVar) {
    if ((testyVar == 4 || testyVar == 6 || testyVar == 9 || testyVar == 11)) {
        return 31;
    }
    else if (testyVar == 1 || testyVar == 3 || testyVar == 5 || testyVar == 7 || testyVar == 8 || testyVar == 10 || testyVar == 12)
    {
        return 32;
    }
    else if (testyVar == 2 && isLeapYear() == true)
    {
        return 30;
    }
    else
    {
        return 29;
    }
}



int Date::getDay() const {
    return day;
};

int Date::getMonth() const {
    return month;
};

int Date::getYear() const {
    return year;
};

string Date::getMonthName() const {
    return monthName;
}

void Date::numericalPrint() {
    cout << month << "/" << day << "/" << year << endl;
}

void Date::monthNormPrint() {
    cout << monthName << " " << day << ", " << year << endl;
}

void Date::monthAltPrint() {
    cout << day << " " << monthName << " " << year << endl;
}

Date& Date::operator++() {
    if (day + 1 < lastDay()) {
        day += 1;
    } else {
        day = 1;
        if (month < 12) {
            month += 1;
        } else {
            month = 1;
            year += 1;
        }
        setMonthName();
    }
    return *this;
}

Date& Date::operator--() {
    day -= 1;
    if (day > 1) {
        day -= 1;
    } else {
        if (month > 1) {
            month -= 1;
        } else {
            month = 12;
            year -= 1;
        }
        day = lastDay() - 1;
    }
    setMonthName();
    return *this;
}

ostream& operator<< (ostream& collate, const Date& d) {
    collate << d.getMonthName() << " " << d.getDay() << ", " << d.getYear() << endl;
    return collate;
}

istream& operator>> (istream& input, Date& n) {
    int m, d, y;
    if (!(input >> m >> d >> y)) {
        return input;
    }
    n.setYear(y);
    n.setMonth(m);
    n.setDay(d);

    cout << endl;

    return input;
}

int operator-(const Date& a, const Date& b) {  //Had exterior help. I neither understand how to create a member function or friend of this
    auto daysSinceEpoch = [](const Date& dt) -> long long {
        int y = dt.getYear();
        int m = dt.getMonth();
        int d = dt.getDay();

        if (m <= 2) {
            y -= 1;
            m += 12;
        }

        long long yy = y;
        long long mm = m;

        long long days = 365 * yy + yy / 4 - yy / 100 + yy / 400;
        days += (153 * (mm - 3) + 2) / 5 + d - 1;

        return days;
    };

    long long da = daysSinceEpoch(a);
    long long db = daysSinceEpoch(b);
    long long diff = da - db;
    if (diff < 0) diff = -diff;  //this checks for negative distance, then flips it as needed
    return static_cast<int>(diff);
}


        