/*Формат входных данных
Вводятся три числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
2
1
Sample Output:

1 1 2*/
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int maxx = max(max(a, b), c);
    int minx = min(min(a, b), c);
    cout << minx << " " << a + b + c - minx - maxx << " " << maxx;
    return 0;
}