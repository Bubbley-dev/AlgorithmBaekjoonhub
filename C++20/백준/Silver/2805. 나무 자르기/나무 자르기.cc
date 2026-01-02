#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n;
    long long m, ans;
    cin >> n >> m;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int b=0, e=v[n-1], mid;
    while(b<=e)
    {
        mid = (b+e) / 2;
        long long a = 0;
        
        for (int t : v) if(t-mid > 0) a += t-mid;
        
        if (a >= m)
        {
            ans = mid;
            b = mid + 1;
        }
        else e = mid - 1;
    }
    
    cout << ans;

    return 0;
}