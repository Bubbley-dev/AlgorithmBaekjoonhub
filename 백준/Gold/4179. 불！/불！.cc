#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int dr[] = {1,-1,0,0}, dc[] = {0,0,1,-1};
int R, C;
bool isValid(int r, int c) {
	return 0 <= r && r < R && 0 <= c && c < C;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    //구현
    cin >> R >> C;
    vector<string> arr(R);
    for(int i = 0; i < R; i++)
    {
        cin >> arr[i];
    }
    
    queue<pair<int, int>> fire, me;  // fire: 불, me: 지훈이

    // 초기 위치 탐색
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			if(arr[i][j] == 'J') me.push({i,j});
			else if(arr[i][j] == 'F') fire.push({i,j});
		}
	}

	int t = 0;  // 시간
	while(true) {
        t++;
		int s = fire.size();  // 불의 갯수
		while(s) {
            s--; // 불의 갯수 감소
			int r, c;
			tie(r, c) = fire.front();  // 불의 위치 꺼내기
			fire.pop();
			for(int i=0; i<4; i++) {  // 불의 상하좌우 탐색
				int tr = r+dr[i], tc = c+dc[i];
				if(!isValid(tr, tc) || arr[tr][tc] == 'F' || arr[tr][tc] == '#') continue;  // 범위 체크
				arr[tr][tc] = 'F';  // 불 확산
				fire.push({tr, tc});  // 불의 위치 추가
			}
		}
		s = me.size();  // 지훈이의 갯수
		while(s) {
            s--; // 지훈이의 갯수 감소
			int r, c;
			tie(r, c) = me.front();  // 지훈이의 위치 꺼내기
			me.pop();
			for(int i=0; i<4; i++) {  // 지훈이의 상하좌우 탐색
				int tr = r+dr[i], tc = c+dc[i];
				if(!isValid(tr, tc))
                {  // 범위에서 벗어난다 == 탈출
                    cout << t;
                    return 0;
                };
				if(arr[tr][tc] == 'F' || arr[tr][tc] == '#' || arr[tr][tc] == 'J') continue;  // 벽이나 불이나 지훈이가 있으면 패스
				arr[tr][tc] = 'J';
				me.push({tr, tc});  // 지훈이의 경로 추가
			}
		}
		if(!me.size())
			return !(cout << "IMPOSSIBLE");
	}

    return 0;
}