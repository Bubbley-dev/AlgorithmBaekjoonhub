#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		cout << "#" << tc << endl;
		int N;
		cin >> N; //파스칼 삼각형 층 수 최대 10

		int arr[10][10];
		for (int i = 0; i < N; i++) {
			// i번째 탐색
			for (int j = 0; j < i+1; j++) {
				//i열의 j번째 원소
				if (i == j || j == 0) {
					arr[i][j] = 1;
				}
				else {
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				}
			}
			for (int n = 0; n < i + 1; n++) {
				cout << arr[i][n] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}