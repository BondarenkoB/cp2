#include <iostream>
#include <Windows.h>

using namespace std;

void swapDigits() 
{
    int number;
    cout << "Введіть чотиризначне число: ";
    cin >> number;

    if (number < 1000 || number > 9999) 
    {
        cout << "Помилка! Введене число не є чотиризначним." << endl;
        return;
    }

    int firstDigit = number / 1000;
    int secondDigit = (number / 100) % 10;
    int thirdDigit = (number / 10) % 10;
    int fourthDigit = number % 10;

    int newNumber = secondDigit * 1000 + firstDigit * 100 + fourthDigit * 10 + thirdDigit;
    cout << "Змінене число: " << newNumber << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    swapDigits();
    return 0;
}
