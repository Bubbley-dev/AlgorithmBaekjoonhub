#include <iostream>
using namespace std;

int main() {
	int T = 10;


	for (int tc = 1; tc <= T; tc++) {
		int arr[1000];
		int view = 0;
		int N; // 건물의 갯수

		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		} // 건물 높이 입력받음

		// i = 2 ~ N-3 까지 탐색 -> 인덱스 오류X
		for (int i = 2; i <= N - 3; i++) {
			// i번 빌딩 탐색
			for (int j = 0; j <= arr[i]; j++) {
				// j층 조망권 확인
				if (arr[i - 1] < j && arr[i - 2] < j && arr[i + 1] < j && arr[i + 2] < j) {
					view++;
				}
			}
		}
		cout << "#" << tc << " " << view << endl;
	}
	return 0;
}