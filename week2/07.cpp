/*
Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.

Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

5
0 1 2 3 4
Sample Output 1:

1
Sample Input 2:

5
2 4 6 8 10
Sample Output 2:

0
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n; vector <int> a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp % 2 != 0) a.push_back(temp); 
		// "temp % 2 > 0" is wrong check cause "-3 % 2 = -1" thanks c++
	}
	int num_min = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] < a[num_min]) num_min = i;
	}
	if (a.size() > 0){
	int temp;
	temp = a[0];
	a[0] = a[num_min];
	a[num_min] = temp;
	cout << a[0];
	}
	else cout << a.size();
	return 0;
}