// Lab_04.3.cpp
// < Кучер, Софія>
// Лабораторна робота № 4.3
// Лінійні програми.
// Варіант 8 
// 
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double X_poch, X_kin, dX;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "Xp: ";
    cin >> X_poch;
    cout << "Xk: ";
    cin >> X_kin;
    cout << "dX: ";
    cin >> dX;

    cout << endl;
    cout << "-------------------------" << endl;
    cout << "|      x      |    F(x)   |" << endl;
    cout << "-------------------------" << endl;

    // Цикл обчислення значень функції F на заданому інтервалі
    for (double x = X_poch; x <= X_kin + dX / 2.0; x += dX) {
        double F;
        bool error = false;

        // Перевірка умов для обчислення F
        if (c < 0 && a != 0) {
            F = -a * x * x;
        }
        else if (c > 0 && a == 0) {
            // Перевірка на ділення на нуль
            if (c * x == 0) {
                error = true;
            }
            else {
                F = (a - x) / (c * x);
            }
        }
        else {
            // Перевірка на ділення на нуль
            if (c == 0) {
                error = true;
            }
            else {
                F = x / c;
            }
        }

        // Вивід результатів у таблицю
        cout << "| " << setw(11) << fixed << setprecision(4) << x << " | ";
        if (error) {
            cout << setw(9) << "Помилка" << " |" << endl;
        }
        else {
            cout << setw(9) << fixed << setprecision(4) << F << " |" << endl;
        }
    }

    cout << "-------------------------" << endl;

    return 0;
}
