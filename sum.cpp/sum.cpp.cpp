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
    a = 2 * factor;   // ������������� ������� �����
    s = a;            // ��������� �����
    do {
        n++;
        dod();        // ��������� ��������� ���� ����
        s += 2 * a;   // ��������� � �����
    } while (fabs(a) > e);
}