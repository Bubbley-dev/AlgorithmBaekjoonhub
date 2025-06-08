#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    long long N, M, i, a, b;
    long long sum[100001] = {0,};
    cin >> N >> M;

    for (i=1; i<N+1; i++)
    {
        cin >> a;
        sum[i] = sum[i-1] + a;
    }

    for (i=0; i<M; i++)
    {
        cin >> a >> b;
        if (a == 0) cout << sum[b] << "\n";
        else cout << sum[b] - sum[a-1] << "\n";
    }

    return 0;
}