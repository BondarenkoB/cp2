#include <iostream>
#include <Windows.h>

using namespace std;

void findMaxNumber()
{
    int maxNumber = INT_MIN;
    int number;

    for (int i = 0; i < 7; i++)
    {
        cout << "Введіть число " << i + 1 << ": ";
        cin >> number;

        if (number > maxNumber) 
        {
            maxNumber = number;
        }
    }

    cout << "Максимальне число: " << maxNumber << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    findMaxNumber();
    return 0;
}
