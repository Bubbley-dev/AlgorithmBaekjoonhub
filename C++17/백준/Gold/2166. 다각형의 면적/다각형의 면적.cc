#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	long double N, t;
	long double S, s;
	cin >> N;
	
	vector<long double> temp;
	vector<vector<long double>> spot;

	// 다각형을 이루는 순서대로 주어졌으니까
	long double r0, c0;
	cin >> r0 >> c0;  // 기준점을 잡아놓고


	// 신발끈 공식
	for (int i = 0; i < N-1; i++) {
		temp.clear();
		for (int j = 0; j < 2; j++) {
			cin >> t;
			temp.push_back(t);
		}
		spot.push_back(temp);
	}
	S = 0;
	long double r1, r2, c1, c2;
	for (int i = 0; i < N - 2; i++) {
		r1 = spot[i][0];
		c1 = spot[i][1];
		r2 = spot[i+1][0];
		c2 = spot[i+1][1];

		s = ((r0 * c1) + (r1*c2) + (r2*c0)) - ((r1*c0) + (r2*c1) + (r0*c2));
		S += s;
		//cout << r1 << c1 << r2 << c2 << s << endl;

	}
	cout << fixed;
	cout.precision(1);
	cout << abs(S/2) << endl;

	return 0;
}