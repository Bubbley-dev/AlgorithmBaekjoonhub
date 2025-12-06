#include <bits/stdc++.h>
#define M 1000001
using namespace std;

int a, k;
vector<int> v(M, 0);
int dp(int n)
{
    if (v[n] != 0) return v[n];
    if (n==a) return 0;
    if (n<a)
    {
        v[n] = M;
        return M;
    }
    
    v[n] = dp(n-1) + 1;
    if (n % 2 == 0) v[n] = min(v[n], dp(n/2) + 1);
    return v[n];
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> a >> k;
    cout << dp(k);
    
    return 0;
}