//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);

	for (int _ = 0; _ < 10; _++) {
		int tc;
		cin >> tc;
		int N;
		cin >> N;

		int arr[100][100] = { 0, };
		for (int i = 0; i < N; i++) {
			int s;
			cin >> s;
			int e;
			cin >> e;
			arr[s][e] = 1;
		}
		int now = 0;
		int visited[100] = { 0, };
		visited[0] = 1;
		int stack[100] = { 0, };
		int top = -1;
		int result = 0;
		while (true) {
			int isnext = 0;
			for (int i = 0; i < 100; i ++ ) {
				// 돌면서 갈 데 있으면 가자
				if (arr[now][i] && !(visited[i])) {
					isnext = 1;
					top++;
					stack[top] = now;
					now = i;
					visited[now] = 1;
				}
			}
			if (!isnext) {
				// 갈 데 없으면?
				if (top > -1) {
					// 돌아갈 데라도 있으면 가자
					now = stack[top];
					top--;
				}
				else break; // 돌아갈 데도 없으면 경로없음
			}
			if (now == 99) {
				result = 1;
				break;
			}
		}
		cout << "#" << tc << " " << result << endl;
	}
	return 0;
}