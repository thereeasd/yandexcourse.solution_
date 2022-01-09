/*
Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).

Формат входных данных
Вводится натуральное число N.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

6
Sample Output:

8
*/
#include <iostream>
using namespace std;
int main() {
	int a = 0, b = 1, i = 0, n;
	cin >> n;
	while (i < n) {
		i++;
		b = a + b;
		a = b - a;
	}
	cout << a;
	return 0;
}