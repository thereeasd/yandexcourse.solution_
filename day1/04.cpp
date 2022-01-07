//Дано двузначное число. Выведите его первую цифру (число десятков)
#include <iostream>
using namespace std;
int main() {
	int n; 
	n <= 10000;
	cin >> n;
	cout << n % 100 /10;
	return 0;
}