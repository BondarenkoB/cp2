#include <iostream>
#include <Windows.h>
using namespace std;

double calculateDistance(double scale, double distanceOnMap) 
{
    return distanceOnMap * scale;
}

void calculateDistanceBetweenTowns()
{
    double scale, distanceOnMap;

    cout << "Обчислення відстані між населеними пунктами." << endl;
    cout << "Введіть вихідні дані : " << endl;
    cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
    cin >> scale;
        
    cout << "Відстань між точками, які зображують населені пункти (см) -> ";
    cin >> distanceOnMap;

    double distance = calculateDistance(scale, distanceOnMap);

    cout << "Відстань між населеними пунктами: " << distance << " км." << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    calculateDistanceBetweenTowns();
    return 0;
}

