#include <iostream>
#include <Windows.h>

using namespace std;

void checkLuckyNumber() 
{
    int number;
    cout << "Введіть шестизначне число: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "Помилка! Введене число не є шестизначним." << endl;
        return;
    }

    int sum1 = number / 100000 + (number / 10000) % 10 + (number / 1000) % 10;
    int sum2 = (number / 100) % 10 + (number / 10) % 10 + number % 10;

    if (sum1 == sum2) {
        cout << "Введене число є щасливим." << endl;
    }
    else {
        cout << "Введене число не є щасливим." << endl;
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    checkLuckyNumber();
    return 0;
}
