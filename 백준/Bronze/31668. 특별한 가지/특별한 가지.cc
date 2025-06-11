#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, M, K;
    cin >> N >> M >> K;

    int line = M / N;
    cout << line * K;

    return 0;
}