#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int max = 0;


		// 입력
		int N, M;
		cin >> N >> M;

		vector<vector <int>> space(N, vector<int>(N));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				int n;
				cin >> n;
				space[i][j] = n;
			}
		}

		for (int r = 0; r <= N - M; r++) {
			for (int c = 0; c <= N - M; c++) {
				// 파리채 좌상단 space[r][c];
				int sum = 0;
				for (int k = 0; k < M; k++) {
					for (int l = 0; l < M; l++) {
						// 파리채가 잡은 칸 space[r+k][c+l]
						sum += space[r + k][c + l];
					}
				}
				if (sum > max) { max = sum; }
			}
		}

		cout << '#' << tc << ' ' << max << endl;
	}
	return 0;
}