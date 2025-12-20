#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll n;
	cin >> n;
	vector<vector<ll>> v(n+1, vector<ll>(n+1, 0));
	
	ll ld=0, rd=0;  // 좌우 대각선, 우좌 대각선
	ll x=-1, y=-1;  // 0이 있는 위치
	
	for (ll i=0; i<n; i++)
	{
	    for (ll j=0; j<n; j++)
	    {
	        cin >> v[i][j];
	        if (v[i][j] == 0) {
                x = i; y = j;
                continue;
            }
	        
	        // 행의 합 체크
	        v[i][n] += v[i][j];
	        // 열의 합 체크
	        v[n][j] += v[i][j];
	        // 좌우 대각선 체크
	        if(i==j) ld += v[i][j];
	        // 우좌 대각선 체크
	        if(i+j == n-1) rd += v[i][j];
	    }
	}
	
    // 1. 기준 합 S 찾기 (0 없는 행)
    ll S = -1;
    for (int i = 0; i < n; i++) {
        if (i != x) {
            S = v[i][n];
            break;
        }
    }

    // ️2. M 계산
    ll M = S - v[x][n];
    if (M <= 0) {
        cout << -1;
        return 0;
    }

    // 3. 열 검증
    if (v[n][y] + M != S) {
        cout << -1;
        return 0;
    }

    // 4. 대각선 검증
    if (x == y && ld + M != S) {
        cout << -1;
        return 0;
    }
    if (x + y == n - 1 && rd + M != S) {
        cout << -1;
        return 0;
    }

    // 5. 모든 행 / 열 검증
    for (int i = 0; i < n; i++) {
        ll rowSum = v[i][n] + (i == x ? M : 0);
        ll colSum = v[n][i] + (i == y ? M : 0);
        if (rowSum != S || colSum != S) {
            cout << -1;
            return 0;
        }
    }

    cout << M;

	return 0;
}