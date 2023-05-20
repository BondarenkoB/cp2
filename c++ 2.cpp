#include <iostream>
#include <Windows.h>

using namespace std;

double calculateSalary(double sales) 
{
    double baseSalary = 200;
    double commission;

    if (sales <= 500) 
    {
        commission = 0.03;
    }
    else if (sales <= 1000) 
    {
        commission = 0.05;
    }
    else {
        commission = 0.08;
    }

    return baseSalary + (commission * sales);
}

void calculateManagerSalary() 
{
    double sales1, sales2, sales3;

    cout << "Введіть рівень продажів для менеджера 1: ";
    cin >> sales1;

    cout << "Введіть рівень продажів для менеджера 2: ";
    cin >> sales2;

    cout << "Введіть рівень продажів для менеджера 3: ";
    cin >> sales3;

    double salary1 = calculateSalary(sales1);
    double salary2 = calculateSalary(sales2);
    double salary3 = calculateSalary(sales3);

    cout << "Зарплата менеджера 1: $" << salary1 << endl;
    cout << "Зарплата менеджера 2: $" << salary2 << endl;
    cout << "Зарплата менеджера 3: $" << salary3 << endl;

    double maxSalary = max(max(salary1, salary2), salary3);
    cout << "Найкращий менеджер отримує премію: $" << maxSalary + 200 << endl;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    calculateManagerSalary();
    return 0;
}
