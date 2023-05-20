#include <iostream>
#include <Windows.h>

using namespace std;

void correctMoneyAmount() 
{
    int hryvnias, kopiykas;

    cout << "Введіть кількість гривень: ";
    cin >> hryvnias;

    cout << "Введіть кількість копійок: ";
    cin >> kopiykas;

    if (kopiykas >= 100)
    {
        int additionalHryvnias = kopiykas / 100;
        hryvnias += additionalHryvnias;
        kopiykas %= 100;
    }

    cout << "Коригована сума: " << hryvnias << " грн " << kopiykas << " коп." << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    correctMoneyAmount();
    return 0;
}
