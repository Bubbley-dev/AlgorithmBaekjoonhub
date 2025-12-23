#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	
	vector<int> v(n+1, 0);
	unordered_map<int, int> m = {{0, 1}};
	
	for (int i=1; i<n+1; i++)
	{
	    v[i] = v[i-1] - i;
	    if (v[i] < 0 || m[v[i]] == 1) v[i] = v[i-1] + i;
	    
	    m[v[i]] = 1;
	}
	
	cout << v[n];
	
	return 0;
}