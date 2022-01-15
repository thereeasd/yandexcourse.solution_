/*
Определите среднее значение всех элементов последовательности, завершающейся числом 0.

Формат входных данных

Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

5.66666666667
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int number, count = 0;
	double sum = 0; //, average;
	while (cin >> number && number != 0) {
		sum += number;
		count++;
	}
	cout << setprecision(11) << (double)sum / count;  //average = sum / count;
	//cout << (double) average;
	return 0;
}
/*
Failed test #1 of 9. Wrong answer

This is a sample test from the problem statement!

Test input:
1
7
9
0
Correct output:
5.66666666667

Your code output:
5.66667
*/