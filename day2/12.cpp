/*Яша плавал в бассейне размером N×M метров и устал.В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков(не обязательно от ближайшего) и Y метров от одного из коротких бортиков.Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик ?

Формат входных данных
Программа получает на вход числа N, M, X, Y.
Формат выходных данных
Программа должна вывести число метров, которое нужно проплыть Яше до бортика.*/
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (n < m)
        swap(n, m);
    cout << min(min(m - x, x), min(n - y, y));
    return 0;
}