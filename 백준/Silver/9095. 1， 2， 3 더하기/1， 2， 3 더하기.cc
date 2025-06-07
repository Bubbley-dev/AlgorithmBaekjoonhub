#include <iostream>
#include <vector>

using namespace std;

vector<int> dp(50, 0);

int solve(int n)
{
    if (n <= 0) return 0;

    if (dp[n]) return dp[n];

    dp[n] = solve(n-3) + solve(n-2) + solve(n-1);
    return dp[n];
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, i, t;
    cin >> N;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;

    for (i = 0; i < N; i++)
    {
        cin >> t;
        cout << solve(t) << "\n";
    }

    return 0;
}