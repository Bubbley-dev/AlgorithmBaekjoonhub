#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    
	int t, n, m, k, x, y;
	cin >> t;
	while (t--)
	{
	    int ans = 0;
        cin >> m >> n >> k;
        vector<vector<int>> b(n, vector<int>(m, 0));
        vector<vector<int>> v(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        
        while(k--)
        {
            cin >> y >> x;
            b[x][y] = 1;
            q.push({x, y});
        }
        
        while (!q.empty())
        {
            // 시작점 꺼내기
            pair<int, int> p = q.front(); q.pop();
            // 방문했었으면 스킵
            if (v[p.first][p.second] == 1) continue;
            
            // 시작점 방문처리
            v[p.first][p.second] = 1;
            ans++;
            
            // 연결된 상하좌우 탐색, 방문처리
            queue<pair<int, int>> bfs;
            bfs.push(p);
            while (!bfs.empty())
            {
                p = bfs.front(); bfs.pop();
                for (int d=0; d<4; d++)
                {
                    int nx=p.first + dx[d];
                    int ny=p.second + dy[d];
                    if (0<=nx && nx<n && 0<=ny && ny<m && b[nx][ny]==1 && v[nx][ny]==0)
                    {
                        v[nx][ny] = 1;
                        bfs.push({nx, ny});
                    }
                }
            }
        }
        cout << ans << "\n";
	}
	
	
	return 0;
}