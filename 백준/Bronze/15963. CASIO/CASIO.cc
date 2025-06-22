#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    long long N, M;
    cin >> N >> M;
    if (N == M) cout << 1;
    else cout << 0;

    return 0;
}