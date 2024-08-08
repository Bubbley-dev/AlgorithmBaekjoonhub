//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	for (int tc = 1; tc <= 10; tc++) {

		int N;
		cin >> N;

		char arr[8][8];
		
		for (int i = 0; i < 8; i++) {
			cin >> arr[i];
		}

		int cnt = 0;

		for (int r = 0; r < 8; r++) {
			for (int c = 0; c <= 8-N; c++) {
				// 행 탐색 arr[r][c] 열탐색 arr[c][r]
				// 행탐색 먼저
				int r_palindrome = 1;
				for (int i = 0; i < N; i++) {
					if (arr[r][c + i] != arr[r][c + N - 1 - i]) {
						r_palindrome = 0;
						break;
					}
				}
				if (r_palindrome == 1) {
					cnt++;
				}
				// 열탐색
				int c_palindrome = 1;
				for (int i = 0; i < N; i++) {
					if (arr[c + i][r] != arr[c + N - 1 - i][r]) {
						c_palindrome = 0;
						break;
					}
				}
				if (c_palindrome == 1) {
					cnt++;
				}
			}
		}
		cout << "#" << tc << " " << cnt << endl;
	}


	return 0;
}