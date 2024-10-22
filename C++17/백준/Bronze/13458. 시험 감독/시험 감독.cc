#include <iostream>
#include <vector>
#include <math.h>
using namespace std;


int main()
{
	int N, B, C;
	vector<int> room;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		room.push_back(n);
	}
	cin >> B >> C;

	long result = 0;  // 감독관 수

	for (int i = 0; i < N; i++) {
		int tester = room[i];  // 감독관이 감시해야 하는 사람 수)
		
		while (tester > 0) {
			// test가 남아있다면
			if (tester == room[i]) {
				// 아직 총감독관 없음
				result++; //총감독관
				tester -= B;
			}
			else {
				// 총 감독관은 있을 때
				int oper = tester/C; //부감독관
				if (oper == 0) {
					oper++;
				}
				result += oper;
 				tester -= oper*C;
			}
		}
	}
	cout << result << endl;

	return 0;
}

