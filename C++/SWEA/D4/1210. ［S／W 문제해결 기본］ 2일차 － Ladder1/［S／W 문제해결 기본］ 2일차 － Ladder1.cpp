//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);


	for (int _ = 1; _ <= 10; _++) {

		int tc;
		cin >> tc;

		// 사다리 입력받기
		int ladder[100][100];
		for (int r = 0; r < 100; r++) {
			for (int c = 0; c < 100; c++) {
				cin >> ladder[r][c];
			}
		}

		// 맨 아래에서 올라가자
		// 시작점 c 기록하자
		int r = 99;
		int c = 0;

		for (int j = 0; j < 100; j++) {
			if (ladder[r][j] == 2) {
				c = j;
				break;	// c 저장됨
			}
		}

		char d = 'u'; // 위로 간다

		while (r > 0){

			int l = c - 1;
			if (l >= 0) {
				int left = ladder[r][l];	// 디버깅용
			}
			int rr = c + 1;
			if (rr < 100) {
				int right = ladder[r][rr];  // 디버깅용
			}

			if (d == 'l' && 0 <= l && ladder[r][l] == 1) { c--; }
			else if (d == 'r' && rr < 100 && ladder[r][rr] == 1) {c++;}
			else if (d == 'u' && 0 <= l && ladder[r][l] == 1) {
				d = 'l';
				c--;
			}
			else if (d == 'u' && rr < 100 && ladder[r][rr] == 1) {
				d = 'r';
				c++;
			}
			else {
				d = 'u';
				r--;
			}
		
		}

		cout << "#" << tc << " " << c << endl;

	}

	return 0;
}