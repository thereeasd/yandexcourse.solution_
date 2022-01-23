/*
Выведите все четные элементы массива.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве.
Sample Input:

7
1 2 2 3 3 3 4
Sample Output:

2 2 4
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
       int temp;
       cin >> temp;
      if(temp % 2 == 0) a.push_back(temp);
    }
    for (auto now : a) cout << now << " ";
    /*for (int i = 0; i < n; i++) { 
        cout << a[i] << " "; -- отработал с ошибкой!!!!!!!
    }*/
    return 0;
}