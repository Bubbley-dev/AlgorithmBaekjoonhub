#include <iostream>
#include <vector>

using namespace std;

int solve(vector<long long>& dp, int n)
{
    if (dp[n]) return dp[n];
    dp[n] = (solve(dp, n-1) + solve(dp, n-2)) % 10007;
    return dp[n];
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N;
    cin >> N;

    vector<long long> dp(N+1);

    dp[1] = 1;
    if (N>1) dp[2] = 2;
    if (N>2) solve(dp, N);

    cout << dp[N] % 10007;

    return 0;
}