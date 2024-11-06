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
    cout << "������� ��������� �������� x (x_p): "; cin >> x_p;
    cout << "������� �������� �������� x (x_k): "; cin >> x_k;
    cout << "������� ��� (dx): "; cin >> dx;
    cout << "������� �������� (eps): "; cin >> e;
    cout << endl;

    cout << setw(10) << "x"
        << setw(20) << "����� ����"
        << setw(20) << "������ ��������"
        << setw(10) << "�����" << endl;
    cout << string(60, '-') << endl;

    x = x_p;
    while (x <= x_k) {
        if (x <= 0) {
            cout << "������: x ������ ���� ������ 0" << endl;
            x += dx;
            continue;
        }
        sum();  // ���������� ����� ����
        cout << setw(10) << x
            << setw(20) << s
            << setw(20) << log(x)
            << setw(10) << n << endl;
        x += dx;
    }
    return 0;
}