#include <iostream>
using namespace std;

int main() {
	int T = 10;

	for (int tc = 1; tc <= T; tc++) {
		int N;
		int cnt[101] = {0,};
		int temp;

		cin >> N; // 덤프 횟수
		
		for (int i = 0; i < 100; i++) {
			// 상자 높이 입력 받으면서 해당 카운트배열 증가
			cin >> temp;
			cnt[temp]++;
		}

		// 가장 낮은 인덱스 찾기
		int min_i = 100;
		for (int i = 0; i < 100; i++) {
			if (cnt[i]) {
				min_i = i; // 가장 처음 0이 아닌 값
				break;
			}
		}
		// 가장 높은 인덱스 찾기
		int max_i = 100;
		for (int i = 100; i > -1; i--) {
			if (cnt[i]) {
				max_i = i; // 가장 처음 0이 아닌 값
				break;
			}
		}

		for (int i = 0; i < N; i++) {
			// N번 덤프
			// 최대 최소 갯수 감소
			cnt[max_i]--;
			cnt[min_i]--;
			// 다음 값 증가
			cnt[max_i - 1]++;
			cnt[min_i + 1]++;

			// 갯수 0개 됐으면 인덱스 갱신
			if (cnt[max_i] == 0) {
				max_i--;
			}
			if (cnt[min_i] == 0) {
				min_i++;
			}
		}

		cout << "#" << tc << " " << max_i - min_i << endl;
	}






	return 0;
}