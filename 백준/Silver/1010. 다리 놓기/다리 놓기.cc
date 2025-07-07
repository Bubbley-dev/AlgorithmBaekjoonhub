#include <iostream>

using namespace std;

int comb(int n, int r)
{
    static int DP[30][30];
    
    if (r==0 || n==r) return 1;

    if (DP[n][r]) return DP[n][r];

    return DP[n][r] = comb(n-1, r-1) + comb(n-1, r);
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    //구현
    unsigned long long T, N, M, ans;
    cin >> T;
    for (int t=0; t<T; t++)
    {
        cin >> N >> M;

        ans = comb(M, N);

        cout << ans << "\n";
    }

    return 0;
}
