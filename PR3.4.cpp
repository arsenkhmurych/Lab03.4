// Lab_03_4.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 29
#include <iostream>
using namespace std;

int main()
{
    double R; // вхідний параметр
    double x; // вхідний аргумент
    double y; // вхідний параметр

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if ((x * x + y * y <= R * R && x <= 0 && y <= 0) ||
        (x * x + y * y <= R * R && y >= (x - 1) * (x - 1) && x >= 0))
        cout << "так" << endl;
    else
        cout << "ні" << endl;

    cin.get();
    return 0;
}