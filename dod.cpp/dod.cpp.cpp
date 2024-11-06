
#include <cmath>
#include "../var.h/var.h.cpp"
#include "../dod.h/dod.h.cpp"

using namespace nsVar;

void nsDod; static void dod() {
    double factor = (x - 1) / (x + 1);
    a *= factor * factor;         // Обновляем степень
    a /= (2 * n + 1);             // Обновляем знаменатель
}