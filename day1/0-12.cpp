//МКАД
//Длина Московской кольцевой автомобильной дороги —109 километров. Байкер Вася стартует с нулевого километра МКАД и едет со скоростью V километров в час. На какой отметке он остановится через T часов?
#include <iostream>
using namespace std;
int main() {
	int v, t, m;
	cin >> v >> t;
	m = 109;
	cout << ( v * t % m + m) % m;
	return 0;
}