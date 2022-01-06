//Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && a == c && b == c ) {
		cout << "3"; 
	}
	else if (a != b && a != c && b != c) {
		cout << "0";
	}
	else if (a == b && b != c || a == c && a != b || b == c && b != a) {
		cout << "2";
	}
	return 0;
}
/*_=_alternative more progressive :D
#include <iostream>
using namespace std;
int main() {
 int a, b, c;
 cin >> a >> b >> c; 
 int result = 0;
 if (a == b) result++;
 if (a == c) result++;
 if (b == c) result++;
 if (result == 1) result++;   
  cout << result;
  return 0;
}*/