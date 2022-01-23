/*
Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений
https://ucarecdn.com/93022c01-0fa4-4f6b-a630-851f1a12dc29/
имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.
Формат входных данных
Вводятся шесть чисел - коэффициенты уравнений системы.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
1
0
0
1
3
3
Sample Output:
3 3
*/
#include <iostream>
using namespace std;
int main() {
    double a, b, c, d, e, f, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    double det = a * d - b * c;
    x = (e * d - b * f) / det;
    y = (a * f - e * c) / det;
    cout << x << ' ' << y;
    return 0;
}