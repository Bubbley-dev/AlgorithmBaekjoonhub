#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> T(1);
vector<int> P(1);

void perm(int day, int now_pay, int& max_pay) {
	if (day == N+1) {
		if (max_pay < now_pay) {
			max_pay = now_pay;
		}
		return;
	}
	if (day >= N+1) {
		return;
	}

	// 오늘 상담 할 경우 (할 수 있는 경우)
	if (day + T[day] <= N + 1) {
		perm(day + T[day], now_pay + P[day], max_pay);
	}
	
	// 오늘 상담 안 할 경우
	perm(day + 1, now_pay, max_pay);
	
}


int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		int t, p;
		cin >> t >> p;
		T.push_back(t);
		P.push_back(p);
	}

	int max_pay = 0;

	perm(1, 0, max_pay);
	
	cout << max_pay << endl;

	return 0;
}

