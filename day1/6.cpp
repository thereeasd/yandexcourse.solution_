//Дано целое трехзначное число. Найдите сумму его цифр.
#include <iostream>
using namespace std;
int main() {
	int n; 
	n <= 100;
	n >= 999;
	cin >> n;
	cout << n / 100 + n / 10 - n/100*10 +  n % 10;
    return 0;
}