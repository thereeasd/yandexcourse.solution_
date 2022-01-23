/*
Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа. Если соседних элементов одного знака нет - не выводите ничего. Если таких пар соседей несколько - выведите первую пару.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля.
Формат выходных данных
Выведите ответ на задачу. Элементы выводятся в порядке неубывания.
Sample Input:

5
-1 2 3 -1 -2
Sample Output:

2 3
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n; vector <int> a;
	cin >> n;
	//input
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	//calculation & output
	bool match = false;
	for (int i = 1; i < a.size() && !match; i++) {
		if (a[i - 1] > 0 && a[i] > 0 || a[i - 1] < 0 && a[i] < 0) {
			match = true;
			if (a[i - 1] < a[i]) cout << a[i - 1] << " " << a[i];
			else cout << a[i] << " " << a[i - 1];
			break;
		}
	}
return 0;
}