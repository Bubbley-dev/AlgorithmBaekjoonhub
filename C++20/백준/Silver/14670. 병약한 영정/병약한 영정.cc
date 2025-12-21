#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n;
	
	vector<int> v(101, -1);
	while(n--)
	{
	    cin >> a >> b;
	    v[a] = b;
	}
	
	cin >> n;
	vector<int> ans;
	while (n--) {
		bool flag = 1;
		ans.clear();
		cin >> b;
		while (b--) {
			cin >> a;
			if (v[a] < 0) flag = 0;
			else ans.emplace_back(v[a]);
		}
		if (flag) {
			for (auto &b : ans) cout << b << ' ';
			cout << '\n';
		}
		else cout << "YOU DIED\n";
	}
	return 0;
}