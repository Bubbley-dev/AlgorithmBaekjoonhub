#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	auto cmp = [](long long a, long long b)
	{
		if (abs(a) == abs(b)) return a > b;
		else return abs(a) > abs(b);
	};

	long long n, t;
	cin >> n;
	priority_queue<long long, vector<long long>, decltype(cmp)> pq(cmp);

	while (n--)
	{
		cin >> t;
		if (t != 0) pq.push(t);
		else if (pq.empty()) cout << "0\n";
		else {
			cout << pq.top() << "\n";
			pq.pop();
		}
	}


	return 0;
}