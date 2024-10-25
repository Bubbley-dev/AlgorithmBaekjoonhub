#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>

using namespace std;

int N;
vector<long> list;
// pH는 오름차순!

vector<long> result(3, LONG_MAX);
// result = [최소절대값, 용액1, 용액2]

void solve() {
	long pH, abspH;
	int l = 0;
	int r = N - 1;

	while (l < r) {
		pH = list[l] + list[r];
		abspH = abs(pH);
		if (abspH < result[0]) {
			result[0] = abspH;
			result[1] = list[l];
			result[2] = list[r];
		}

		if (pH < 0) {
			l++;
		}
		else {
			r--;
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		long temp;
		cin >> temp;
		list.push_back(temp);
	}

	solve();

	cout << result[1] << ' ' << result[2] << endl;
	return 0;
}