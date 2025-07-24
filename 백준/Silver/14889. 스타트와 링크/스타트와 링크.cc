#include <iostream>
#include <vector>

using namespace std;

void calc(vector<int> teamA, vector<int> teamB, int& N, vector<vector<int>>& S, int& minimum) {
	int synA = 0;
	int synB = 0;

	// teamA 시너지 계산
	for (int i = 0; i < N / 2 - 1; i++) {
		// i번째 팀원의 시너지 계산
		for (int j = i+1; j < N / 2; j++) {
			synA += S[teamA[i]][teamA[j]];
			synA += S[teamA[j]][teamA[i]];
		}
	}

	// teamB 시너지 계산
	for (int i = 0; i < N / 2 - 1; i++) {
		// i번째 팀원의 시너지 계산
		for (int j = i+1; j < N / 2; j++) {
			synB += S[teamB[i]][teamB[j]];
			synB += S[teamB[j]][teamB[i]];
		}
	}

	int result = abs(synA - synB);

	if (result < minimum) { minimum = result; }

	return;
}

void pick(int n, vector<int> teamA, vector<int> teamB, vector<vector<int>>& S, int& N, int& minimum) {
	if (teamA.size() == N / 2) {
		// 남은 사람 다 teamB에 넣어야 함
		for (int i = n; i < N; i++) { teamB.push_back(i); }
		calc(teamA, teamB, N, S, minimum);
		return;
	}
	else if (n - teamA.size() == N / 2) {
		// 남은 사람 다 teamA에 넣어야 함
		for (int i = n; i < N; i++) { teamA.push_back(i); }
		calc(teamA, teamB, N, S, minimum);
		return;
	}

	// 아직 인원이 덜 찼으면 
	// 뽑는 경우
	teamA.push_back(n);
	pick(n + 1, teamA, teamB, S, N, minimum);
	teamA.pop_back();  // 원상복구

	// 안뽑는 경우
	teamB.push_back(n);
	pick(n + 1, teamA, teamB, S, N, minimum);
	teamB.pop_back();  // 원상복구
	
}


int main() {
	int N, t, minimum;
	cin >> N;

	vector<vector <int>> S(N, vector<int>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> t;
			S[i][j] = t;
		}
	}

	minimum = 1e9;

	vector<int> teamA, teamB;

	pick(0, teamA, teamB, S, N, minimum);

	cout << minimum << endl;

	return 0;
}