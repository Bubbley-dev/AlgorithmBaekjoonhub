//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	//freopen("GNS_test_input.txt", "r", stdin);
	//freopen("GNS_output.txt", "w", stdout);

	char GNS[10][4] = {"ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN"};
	
	int T;
	cin >> T;

	for (int _ = 0; _ < 10; _++) {
		char tc[100];
		cin >> tc;

		int N;
		cin >> N;

		int arr[10000] = {0, };
		
		// 입력 받아서 카운트배열 만듦
		int cnt[10] = {0, };
		for (int i = 0; i < N; i++) {
			char temp[4];
			cin >> temp;

			for (int j = 0; j < 10; j++) {
				bool is_GNS = true;
				for (int k = 0; k < 4; k++){
					if (temp[k] != GNS[j][k]) {
						is_GNS = false;
						break;
					}
				}
				if (is_GNS == true) {
					cnt[j]++;
					break;
				}
			}
		}

		cout << tc << " ";
		for (int i = 0; i < 10; i++) {
			//카운트배열 돌면서 출력
			while (cnt[i] > 0) {
				cout << GNS[i] << " ";
				cnt[i]--;
			}
		}
		cout << endl;
	}
	return 0;
}