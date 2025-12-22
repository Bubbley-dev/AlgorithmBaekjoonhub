#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, t, ans=0;
	cin >> n;
	vector<int> v(n);
	for (int i=0; i<n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	cin >> t;
	
	int s=0, e=n-1, k;
	
	while (s<e)
	{
	    k = v[s]+v[e];
	    if (k==t) ans++;
	    if (k<=t) s++;
	    else e--;
	}
	
	cout << ans;
	
	return 0;
}