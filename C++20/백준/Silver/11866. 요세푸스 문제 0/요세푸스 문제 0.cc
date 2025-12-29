#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	queue<int> q;
	for (int i=1; i<n+1; i++) q.push(i);
	
	vector<int> v;
	while (!q.empty())
	{
	    int t=k-1;
	    while(t--)
	    {
	        q.push(q.front());
	        q.pop();
	    }
	    v.push_back(q.front());
	    q.pop();
	}
	
	cout << "<";
	for (int i=0; i<n; i++)
	{
	    cout << v[i];
	    if (i != n-1) cout << ", ";
	    else cout << ">";
	}
	
	return 0;
}