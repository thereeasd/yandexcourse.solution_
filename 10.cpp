// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() {
	int N, M, K;
	cin >> N >> M >> K;
	if ((N * M) > K && ((K % M) == 0 || (K % N) == 0))
	{
		cout << "YES";
	}
	else cout << "NO";
	return 0;
}