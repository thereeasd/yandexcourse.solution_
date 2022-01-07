//Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
	cin >> a >> b >> c;
	cout << a / 2 + a % 2 + b / 2 + b % 2 + c / 2 + c % 2;
    return 0;
}