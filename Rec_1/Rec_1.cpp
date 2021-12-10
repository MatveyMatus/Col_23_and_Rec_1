#include <iostream>
using namespace std;

double power_R(double y, int r) {
    if (r == 0)
        return 1;
    if (r < 0) {
        r = -r;
        y = 1.0 / y;
    }
    if (r % 2 == 0)
        return power_R(y * y, r / 2);
    return y * power_R(y, r - 1);
}

double power_b(double x, int p) {
    double m, t;
    if (p < 0) {
        p = -p;
        x = 1.0 / x;
    }
    m = x;
    t = 1;
    while (p != 0) {
        if (p % 2)
            t *= m;
        m *= m;
        p /= 2;
    }
    return t;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        char y;
        char u;
        int i, j;
        cout << "–екусивный вариант или нерекусивный вариант вычислений? [R/b]" << endl;
        cin >> u;
        if (u == 'R' || u == 'r') {
            cout << "¬ведите число: ";
            cin >> i;
            cout << "¬ведите степень числа: ";
            cin >> j;
            cout << power_R(i, j) << endl;
        }
        else {
            cout << "¬ведите число: ";
            cin >> i;
            cout << "¬ведите степень числа: ";
            cin >> j;
            cout << power_b(i, j) << endl;
        }
        cout << "’отите выйти? [Y/n]" << endl;
        cin >> y;
        if (y == 'y' || y == 'Y') {
            return 0;
        }
        cout << endl;
    }

}

