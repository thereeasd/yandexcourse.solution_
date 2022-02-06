/*Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

6
1 2 2 3 3 3
Sample Output 1:

1
Sample Input 2:

8
4 3 5 2 5 1 3 5
Sample Output 2:

4 2 1*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int q;
    vector<int> v;
    cin >> q;
    vector<int> uni(q);
    //input
    while (cin >> q) {
        v.push_back(q);
    }
    //calculation
    for (int i = 0; i < v.size(); ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] == v[j]) {
                ++uni[i];
                ++uni[j];
            }
        }
    }
   //output
    for (int i = 0; i < uni.size(); ++i) {
        if (uni[i] == 0) {
            cout << v[i] << ' ';
        }
    }
    return 0;
}