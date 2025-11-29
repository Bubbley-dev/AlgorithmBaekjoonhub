#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	vector<vector<int>> v(n, vector<int>(2));
	for (int i=0; i<n; i++)
	{
	    cin >> v[i][0] >> v[i][1];
	}
	sort(v.begin(), v.end(), [](vector<int> a, vector<int> b){
	    if (a[1] != b[1]) return a[1] < b[1];
	    return a[0] < b[0];
	});
	
	for (auto p : v)
	{
	    cout << p[0] << " " << p[1] << "\n";
	}
	
	return 0;
}