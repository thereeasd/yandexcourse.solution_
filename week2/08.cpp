/*
Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

6
1 2 2 3 3 3
Sample Output:

3 
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> a;
    cin >> n;
    for (int i = 0; cin >> n; i++) {
        a.push_back(n);
    }
    int unique = 1;
    for (int i = 1; i < a.size(); i++) {
        if (a[i - 1] != a[i]) unique++;
    }
    cout << unique;

    return 0;
}