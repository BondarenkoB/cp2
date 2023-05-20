#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

double calculateSphereVolume(double radius) 
{
    return (4.0 / 3.0) * 3.14159 * pow(radius, 3);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double radius;

    cout << "Обчислення об'єму кулі." << endl;
    cout << "Введіть радіус кулі: ";
    cin >> radius;

    double volume = calculateSphereVolume(radius);

    cout << "Об'єм кулі: " << volume << endl;

    return 0;
}
