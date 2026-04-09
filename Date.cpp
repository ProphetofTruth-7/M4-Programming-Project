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

Date Date::operator+(const Date& n) const {
    Date result = *this;
    if (result.day + 1 < result.lastDay()) {
        result.day += 1;
    }
    else {
        result.day = 1;
        if (result.month < 12) {
            result.month += 1;
        }
        else {
            result.month = 1;
            result.year += 1;
        }
        result.setMonthName();
    }

    return result;
}