#include <iostream>
#include <vector>
#include <string>

using namespace std;

void comb(int n, int& N, vector<int>& A, vector<int> now_oper, long result, long& min_result, long& max_result) {
	/*
	n : n번째 원소를 연산할 것
	now_oper : 남은 연산자 개수 (+ - x /)
	*/
	if (n == N) {
		if (min_result > result) { min_result = result; }
		if (max_result < result) { max_result = result; }
		return;
	}
	
	if (now_oper[0] > 0) {
		now_oper[0] -= 1;
		comb(n + 1, N, A, now_oper, result+A[n], min_result, max_result);
		now_oper[0] += 1;  // 되돌려놓기
	}
	if (now_oper[1] > 0) {
		now_oper[1] -= 1;
		comb(n + 1, N, A, now_oper, result-A[n], min_result, max_result);
		now_oper[1] += 1;  // 되돌려놓기
	}
	if (now_oper[2] > 0) {
		now_oper[2] -= 1;
		comb(n + 1, N, A, now_oper, result*A[n], min_result, max_result);
		now_oper[2] += 1;  // 되돌려놓기
	}
	if (now_oper[3] > 0) {
		now_oper[3] -= 1;
		comb(n + 1, N, A, now_oper, result/A[n], min_result, max_result);
		now_oper[3] += 1;  // 되돌려놓기
	}

}


int main() {
	int N;
	vector<int> A;
	vector<int> oper;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		A.push_back(t);
	}
	for (int i = 0; i < 4; i++) {
		int t;
		cin >> t;
		oper.push_back(t);
	}

	long min_result = 1e9;
	long max_result = -1e9;

	comb(1, N, A, oper, A[0], min_result, max_result);

	cout << max_result << '\n' << min_result << endl;

	return 0;
}