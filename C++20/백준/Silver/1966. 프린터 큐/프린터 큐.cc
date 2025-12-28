#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t, n, m, k;
	cin >> t;
	while (t--)
	{
	    cin >> n >> m;
	    vector<int> v(n);
	    queue<pair<int, int>> q;
	    for (int i=0; i<n; i++)
	    {
	        cin >> v[i];
	        q.push({v[i], i}); // 중요도, index
	    }
	    
	    sort(v.begin(), v.end());  // 큰게 맨 뒤에 있음
	    
	    int ans = 0;
	    while(!q.empty())
	    {
	        auto p = q.front(); q.pop();
	        if (p.first == v.back())
	        {
	            ans++;
	            v.pop_back();
	            if (p.second == m)
	            {
	                cout << ans << "\n";
	                break;
	            }
	        }
	        else q.push(p);
	    }
	    while(!q.empty()) q.pop();
	}
	
	return 0;
}