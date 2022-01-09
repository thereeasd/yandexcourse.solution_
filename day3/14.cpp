/*
Определите наименьшее расстояние между двумя локальными максимумами последовательности натуральных чисел, завершающейся числом 0. Если в последовательности нет двух локальных максимумов, выведите число 0.

Начальное и конечное значение при этом локальными максимумами не считаются.

Расстоянием считается количество пробелов между элементами. В качестве примера смотрите первый тест.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

1
2
1
1
2
1
2
1
0
Sample Output 1:

2
Sample Input 2:

1
2
3
0
Sample Output 2:

0
*/
#include <iostream>
using namespace std;
int main() {
    int previous, current, next, distance = 0, current_distance = distance, min_distance = current_distance;
    if (cin >> previous && previous != 0) {
        if (cin >> current && current != 0) {
            if (cin >> next) {
                int pos = 2;
                while (next != 0) {
                    if (previous < current && current > next) {
                        if (distance != 0) {
                            current_distance = pos - distance;
                            if (min_distance == 0) {
                                min_distance = current_distance;
                            }
                            else {
                                min_distance = min(current_distance, min_distance);
                            }
                        }
                        distance = pos;
                    }
                    ++pos;
                    previous = current;
                    current = next;
                    cin >> next;
                }
            }
        }
    }
    cout << min_distance;
    return 0;
}