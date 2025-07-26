#include <iostream>
#include <climits>
using namespace std;

void backtracking(int n, int c, int& result) {
	if (n == 1) {
		if (c < result) {
			result = c;
		}
		return;
	}

	if (c > result) {
		return;
	}

	if (n % 3 == 0) {
		backtracking(n / 3, c + 1, result);
	}
	if (n % 2 == 0) {
		backtracking(n / 2, c + 1, result);
	}
	backtracking(n - 1, c + 1, result);
}

int main()
{
	int N;
	cin >> N;

	int result = INT_MAX;

	backtracking(N, 0, result);
	
	cout << result << endl;
}

