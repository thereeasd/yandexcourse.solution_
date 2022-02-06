/*
Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
Формат входных данных

Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
Sample Input 1:

1 7
2 4
3 2
4 8
5 6
6 1
7 3
8 5
Sample Output 1:

NO
Sample Input 2:

1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1
Sample Output 2:

YES
*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	bool pair = false;  int x, y; vector<int> a;
	while (cin >> x >> y) {
		a.push_back(x);
		a.push_back(y);
	}
	for (int i = 0; i < a.size() && !pair; i += 2) {
		for (int j = i + 2; j < a.size() && !pair; j += 2) {
			if (a[i] == a[j] || a[i + 1] == a[j + 1] || abs(a[i] - a[j]) == abs(a[i + 1] - a[j + 1])) pair = true;
		}
	}
	if (pair) cout << "YES";
	else cout << "NO";
	return 0;
}
