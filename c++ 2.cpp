#include <iostream>
#include <Windows.h>

using namespace std;

double calculateVolume(double length, double width, double height) 
{
    return length * width * height;
}

void calculateParallelepipedVolume() 
{
    double length, width, height;

    cout << "Обчислення об'єму паралелепіпеда." << endl;
    cout << "Введіть вихідні дані:" << endl;

    cout << "Довжина (см) -> ";
    cin >> length;

    cout << "Ширина (см) -> ";
    cin >> width;

    cout << "Висота (см) -> ";
    cin >> height;

    double volume = calculateVolume(length, width, height);

    cout << "Об'єм: " << volume << " куб. см." << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    calculateParallelepipedVolume();
    return 0;
}
