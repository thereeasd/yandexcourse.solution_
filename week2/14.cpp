
/*
N кеглей выставили в один ряд, занумеровав их слева направо числами от 1 до N. Затем по этому ряду бросили K шаров, при этом i-й шар сбил все кегли с номерами от li до ri включительно. Определите, какие кегли остались стоять на месте.

Формат входных данных

Программа получает на вход количество кеглей N и количество бросков K. Далее идет K пар чисел li, ri, при этом 1 ≤ li, ri ≤ N.

Формат выходных данных
Программа должна вывести последовательность из N символов, где j-й символ есть “I”, если j-я кегля осталась стоять, или “.”, если j-я кегля была сбита.
Sample Input:

10 3
8 10
2 5
3 6
Sample Output:

I.....I...
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int x, y; vector<int> keg; vector<int> throws;
    cin >> x >> y;
    for (int i = 0; i < x; ++i) {
        keg.push_back(0);
    }
    for (int i = 0; i < y; ++i) {
        int c, z;
        cin >> c >> z;
        throws.push_back(c);
        throws.push_back(z);
    }
    for (int i = 0; i < throws.size(); i += 2) {
        for (int j = throws[i] - 1; j < throws[i + 1]; ++j) {
            keg[j] = 1;
        }
    }
    for (int i = 0; i < keg.size(); ++i) {
        if (!keg[i]) {
            cout << 'I';
        }
        else {
            cout << '.';
        }
    }
    return 0;
}
//!!!!!!
/*
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, k, l, r;
    cin >> n >> k;
    vector <char> a;
    while(n-- > 0)
        a.push_back('I');
    while(k-- > 0)
    {
        cin >> l >> r;
        while (r-- > l-1)
            a[r] = '.';
    }
    for(auto vect: a)
        cout << vect;
}
*/
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! 
/*
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k, b, e;
    cin >> n >> k;
    vector <char> a(n, 'I');
    for (int i = 0; i < k; i++) { 
        cin >> b >> e;
        for (int j = b - 1; j < e; j++) a[j] = '.'; 
    }
    for (int i = 0; i < n; i++) cout << a[i];
}
*/