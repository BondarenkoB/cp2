#include <iostream>
#include <Windows.h>

using namespace std;

int calculateDaysInYear(int year)
{
    int days = 365;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        days = 366;
    }

    return days;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int year;

    cout << "Введіть рік: ";
    cin >> year;

    int daysInYear = calculateDaysInYear(year);

    cout << "У році " << year << " - " << daysInYear << " днів." << endl;

    return 0;
}
