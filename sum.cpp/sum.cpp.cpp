#include <cmath>
#include "../var.cpp/var.cpp.cpp"
#include "../dod.h/dod.h.cpp"
#include "../sum.h/sum.h.cpp"
#include "sum.cpp.h"

using namespace nsDod;
using namespace nsVar;

void nsSum; static void sum() {
    n = 0;
    double factor = (x - 1) / (x + 1);
    a = 2 * factor;   // Инициализация первого члена
    s = a;            // Начальная сумма
    do {
        n++;
        dod();        // Вычисляем следующий член ряда
        s += 2 * a;   // Добавляем к сумме
    } while (fabs(a) > e);
}