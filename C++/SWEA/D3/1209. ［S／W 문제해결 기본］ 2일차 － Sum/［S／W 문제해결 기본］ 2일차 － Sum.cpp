#include <iostream>
using namespace std;

int main() {
	for (int _ = 0; _ < 10; _++) {
		int tc;
		cin >> tc;

		int arr[100][100]{};

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> arr[i][j];
			}
		}

		int result;
		int rdsum = 0;
		int ldsum = 0;

		for (int i = 0; i < 100; i++) {
			int rsum = 0;
			int csum = 0;

			for (int j = 0; j < 100; j++) {
				rsum += arr[i][j];
				csum += arr[j][i];

				if (i == j) {
					rdsum += arr[i][j];
				}
				if (i + j == 99) {
					ldsum += arr[i][j];
				}
			}
			if (i == 0) {
				result = rsum;
			}
			if (result < rsum) { result = rsum; }
			if (result < csum) { result = csum; }
		}
		if (result < rdsum) { result = rdsum; }
		if (result < ldsum) { result = ldsum; }

		cout << "#" << tc << " " << result << endl;
		
		
	}


	return 0;
}