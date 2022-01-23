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
/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, temp; vector <int> a;
    cin >> n;
    for (int i = 0; cin >> n; i++) a.push_back(n);
    for (int i = 1; i < n; i += 2) {
        temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
    }
    for (auto now : a) cout << now << " ";
    return 0;
}
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    vector <int> a(n);
    //считывание
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //обработка
    for (int i = 1; i < n; i += 2) {
        temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
    //вывод
    for (auto now : a) {
        cout << now << " ";
    }
    return 0;
}