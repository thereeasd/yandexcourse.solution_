/*
Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.

Формат входных данных
Вводится натуральное число.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

1
Sample Output 1:

YES
Sample Input 2:

2
Sample Output 2:

YES
*/
#include <iostream>
using namespace std;
int main() {
	int i = 1, N;
	cin >> N;
	while (i < N) {
		i = i * 2;
	}
	if (i == N) cout << "YES";
	else cout << "NO";
	return 0;
}