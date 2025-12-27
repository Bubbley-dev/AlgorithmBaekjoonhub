#include <iostream>

using namespace std;

int n, m, k;

int main() {
    cin >> n >> m >> k;
    // 음수나 0인 경우 양수로 바꿔주기
    while(k < 0) {
        k += n;
    }

    // n보다 큰 경우 n보다 작게 만들기
    while(k > n) {
        k -= n;
    }

    // 3모가 기준
    k -= 3;

    // 절대값
    m = abs(m + k);
    m %= n;

    // 나머지가 0이면 n
    if(!m) m = n;

    cout << m << '\n';

    return 0;
}