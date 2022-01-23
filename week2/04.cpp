/*
Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 5 2 4 3
Sample Output:

5 4
*/
/*#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	for (int i = 1; i < a.size(); i++) {
		if (a[i - 1] < a[i]) cout << a[i] << " ";
	}
	return 0;
}*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n; vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) if (a[i] > a[i - 1]) cout << a[i] << " ";
    return 0;
}