#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n, t;
    cin >> n;
    vector<int> v(n+1, 0);
    for (int i=0; i<n; i++)
    {
        cin >> t;
        v[t]++;
    }
    
    int ans=0, max=0, cnt=0;
    for (int i=1; i<n+1; i++)
    {
        if (v[i]<max) continue;
        else if (v[i]==max) cnt++;
        else {
            max = v[i];
            ans = i;
            cnt = 1;
        }
    }
    
    if (cnt == 1) cout << ans;
    else cout << "skipped";
}