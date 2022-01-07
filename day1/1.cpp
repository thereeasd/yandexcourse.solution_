// N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков достанется каждой белочке.
#include <iostream>
using namespace std;
int main() {
    int N, K;
    N <= 10000;
    K <= 10000;
    cin >> N >> K;
    cout << K/N;
    return 0;
}