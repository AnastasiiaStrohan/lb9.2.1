#include <iostream>
#include <iomanip>
#include "../var.h/var.h.cpp"
#include "../sum.h/sum.h.cpp"
#include "../dod.h/dod.h.cpp"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "Введите начальное значение x (x_p): "; cin >> x_p;
    cout << "Введите конечное значение x (x_k): "; cin >> x_k;
    cout << "Введите шаг (dx): "; cin >> dx;
    cout << "Введите точность (eps): "; cin >> e;
    cout << endl;

    cout << setw(10) << "x"
        << setw(20) << "Сумма ряда"
        << setw(20) << "Точное значение"
        << setw(10) << "Члены" << endl;
    cout << string(60, '-') << endl;

    x = x_p;
    while (x <= x_k) {
        if (x <= 0) {
            cout << "Ошибка: x должно быть больше 0" << endl;
            x += dx;
            continue;
        }
        sum();  // Вычисление суммы ряда
        cout << setw(10) << x
            << setw(20) << s
            << setw(20) << log(x)
            << setw(10) << n << endl;
        x += dx;
    }
    return 0;
}