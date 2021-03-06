/*
Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.

Формат входных данных
Программа получает на вход числа A1, B1, C1, A2, B2, C2.
Формат выходных данных
Программа должна вывести одну из следующих строчек:
Boxes are equal, если коробки одинаковые,
The first box is smaller than the second one, если первая коробка может быть положена во вторую,
The first box is larger than the second one, если вторая коробка может быть положена в первую,
Boxes are incomparable, во всех остальных случаях.
*/
#include <iostream>
using namespace std;
int main() {
    int a1 = 0, b1 = 0, c1 = 0, a2 = 0, b2 = 0, c2 = 0;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1 > b1) {
        int temp;
        temp = a1;
        a1 = b1;
        b1 = temp;
    }
    if (a1 > c1) {
        int temp;
        temp = a1;
        a1 = c1;
        c1 = temp;
    }
    if (b1 > c1) {
        int temp;
        temp = b1;
        b1 = c1;
        c1 = temp;
    }
    if (a2 > b2) {
        int temp;
        temp = a2;
        a2 = b2;
        b2 = temp;
    }
    if (a2 > c2) {
        int temp;
        temp = a2;
        a2 = c2;
        c2 = temp;
    }
    if (b2 > c2) {
        int temp;
        temp = b2;
        b2 = c2;
        c2 = temp;
    }
    if ((a1 == a2) && (b1 == b2) && (c1 == c2)) cout << "Boxes are equal";
    else if ((a1 <= a2) && (b1 <= b2) && (c1 <= c2)) cout << "The first box is smaller than the second one";
    else if ((a1 >= a2) && (b1 >= b2) && (c1 >= c2)) cout << "The first box is larger than the second one";
    else cout << "Boxes are incomparable";
    return 0;
}

/*
Решение аналогичное предыдущему используя swap, на момент решения курса мне был известен, но на пороге вхождения по решению курса не известен студенту.
#include <iostream>
using namespace std;
int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1>b1) swap (a1,b1);
    if (b1>c1) swap (b1,c1);
    if (a1>b1) swap (a1,b1);
    if (a2>b2) swap (a2,b2);
    if (b2>c2) swap (b2,c2);
    if (a2>b2) swap (a2,b2);
    if (a1==a2 and b1==b2 and c1==c2) cout << "Boxes are equal";
    else
        if (a1>=a2 and b1>=b2 and c1>=c2) cout << "The first box is larger than the second one";
        else 
            if (a2>=a1 and b2>=b1 and c2>=c1) cout << "The first box is smaller than the second one";
            else cout << "Boxes are incomparable";
    return 0;
}
*/