#include <iostream>
#include <Windows.h>

using namespace std;

void calculateFuel() 
{
    const int fuelCapacity = 300;
    double distanceAB, distanceBC, cargoWeight;

    cout << "Введіть відстань між пунктами А і В (км): ";
    cin >> distanceAB;

    cout << "Введіть відстань між пунктами В і С (км): ";
    cin >> distanceBC;

    cout << "Введіть вагу вантажу (кг): ";
    cin >> cargoWeight;

    double fuelConsumption;

    if (cargoWeight <= 500) 
    {
        fuelConsumption = 1;
    }
    else if (cargoWeight <= 1000)
    {
        fuelConsumption = 4;
    }
    else if (cargoWeight <= 1500) 
    {
        fuelConsumption = 7;
    }
    else if (cargoWeight <= 2000) 
    {
        fuelConsumption = 9;
    }
    else {
        cout << "Неможливо підняти літак з таким вантажем!" << endl;
        return;
    }

    double totalFuelNeeded = (distanceAB + distanceBC) * fuelConsumption;
    double fuelToRefuel = totalFuelNeeded - fuelCapacity;

    if (fuelToRefuel <= 0) 
    {
        cout << "Потрібно дозаправити літак: 0 л" << endl;
    }
    else
    {
        cout << "Потрібно дозаправити літак: " << fuelToRefuel << " л" << endl;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    calculateFuel();
    return 0;
}

