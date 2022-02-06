/*
Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 2 3 4 5
Sample Output:

5 1 2 3 4
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> a;
    cin >> n;
    //input
    for (int i = 0; cin >> n; i++) a.push_back(n);
    //manilpulations
    int last = a.size() - 1;
    int temp = a[last];
    for (int i = last - 1; i >= 0; i--) {
        a[i + 1] = a[i];
    }
    a[0] = temp;
    //output
    for (auto now : a) {
        cout << now << " ";
    }
    return 0;
}
