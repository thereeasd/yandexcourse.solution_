/*
Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.

Формат входных данных

Вводятся три действительных числа.
Формат выходных данных
Если данное уравнение не имеет корней, выведите число 0. Если уравнение имеет один корень, выведите число 1, а затем этот корень. Если уравнение имеет два корня, выведите число 2, а затем два корня в порядке возрастания. Если уравнение имеет бесконечно много корней, выведите число 3.
Sample Input:

1
-1
-2
Sample Output:

2 -1 2
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, x1, x2;
    const int no_roots = 0, one_root = 1, two_roots = 2, inf_roots = 3;
    cin >> a >> b >> c;
    if (a != 0) {
        double d = b * b - 4 * a * c;
        if (d > 0) {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            cout << two_roots << ' ' << min(x1, x2) << ' ' << max(x1, x2); // swap (x1,x2) аналог
        }
        else if (d == 0) {
            x1 = -b / (2 * a);
            cout << one_root << ' ' << x1;
        }
        else {
            cout << no_roots;
        }
    }
    else {
        if (b == 0 && c == 0) {
            cout << inf_roots;
        }
        else if (b != 0) {
            x1 = -c / b;
            cout << one_root << ' ' << x1;
        }
        else {
            cout << no_roots;
        }
    }
    return 0;
}