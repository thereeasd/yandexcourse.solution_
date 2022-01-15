/*Дана последовательность натуральных чисел x1, x2, ..., xn. Стандартным отклонением называется величина
где
https://ucarecdn.com/a5272a3c-f857-4969-a054-0a362300c32d/
https://ucarecdn.com/f6612807-4fb8-42fc-802e-5221860e8fa2/
- среднее значение последовательности.
Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.
Формат входных данных
Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания). В последовательности не менее двух чисел до 0.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
1
7
9
0
Sample Output:
4.16333199893
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    uint64_t number, y = 0;
    double n = 0, z = 0, f = 0;
    while (cin >> number && number) {
        y += number;
        z += number * number;
        n++;
    }
    double s = y / n, q = sqrt((z - (y * y) / n) / (n - 1));
    cout << setprecision(12) << q;
    return 0;
}/*
решение другого человека с однопроходной формулой оставлю здесь для раздумия над ним

Correct submission #28799200
int main() {
  int t,c=0,s=0,sq=0;
  while(std::cin>>t&&t&&++c&&(s+=t)&&(sq+=t*t));
  std::cout<<std::setprecision(12)<<sqrt((sq-(double)s*s/c)/--c)<<"\n";
}
*/