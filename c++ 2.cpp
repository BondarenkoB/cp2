#include <iostream>
#include <Windows.h>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31;
    }
}

int countDays(int day, int month, int year) {
    int days = 0;

    for (int y = 1; y < year; y++) {
        days += isLeapYear(y) ? 366 : 365;
    }

    for (int m = 1; m < month; m++) {
        days += daysInMonth(m, year);
    }

    days += day;

    return days;
}

void calculateDaysBetweenDates() {
    int day1, month1, year1;
    int day2, month2, year2;

    cout << "Введіть першу дату (день місяць рік): ";
    cin >> day1 >> month1 >> year1;

    cout << "Введіть другу дату (день місяць рік): ";
    cin >> day2 >> month2 >> year2;

    int days1 = countDays(day1, month1, year1);
    int days2 = countDays(day2, month2, year2);

    int daysBetweenDates = abs(days2 - days1);
    cout << "Кількість днів між двома датами: " << daysBetweenDates << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    calculateDaysBetweenDates();
    return 0;
}
