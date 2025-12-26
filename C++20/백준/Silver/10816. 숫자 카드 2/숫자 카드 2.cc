#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, t;
	unordered_map<int, int> m;
	
	cin >> n;
	while (n--)
	{
	    cin >> t;
	    m[t]++;
	}
	
	cin >> n;
	while (n--)
	{
	    cin >> t;
	    cout << m[t] << " ";
	}
	
	
	return 0;
}