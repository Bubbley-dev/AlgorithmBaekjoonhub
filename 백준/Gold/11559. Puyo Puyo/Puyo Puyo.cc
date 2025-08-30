#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    //구현
    vector<string> field(12);
    for(int i = 0; i < 12; i++)
    {
        getline(cin, field[i], '\n');
        // . : 빈공간
        // Red Green Blue Purple Yellow
    }

    // 상하좌우 4개 모이면 터진다, 대각선 불가능
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    // 중력의 영향으로 떨어진다
    // 연쇄 작용 가능
    // 여러개라면 동시에 터진다 (1회로 처리)
    int answer = 0;
    while(true)
    {
        // 전체 돌면서 터질 수 있는 뿌요를 찾는다
        vector<vector<bool>> visited(12, vector<bool>(6, false));
        vector<pair<int, int>> toPop;
        for(int i = 0; i < 12; i++)
        {
            for(int j = 0; j < 6; j++)
            {
                if(field[i][j] != '.')
                {
                    // 주변 연속된 뿌요를 찾는다 >> BFS >> 터질 수 있는지 갯수 체크, 터질 예정 좌표 저장
                    queue<pair<int, int>> q;
                    vector<pair<int, int>> tempToPop;
                    q.push({i, j});
                    tempToPop.push_back({i, j});
                    while(!q.empty())
                    {
                        auto [x, y] = q.front();
                        q.pop();
                        visited[x][y] = true;
                        for(auto [dx, dy] : d)
                        {
                            if(x+dx < 0 || x+dx >= 12 || y+dy < 0 || y+dy >= 6) continue; // 범위 체크
                            if(field[x+dx][y+dy] != field[x][y]) continue; // 색깔 다르면 터질 수 없다
                            if(visited[x+dx][y+dy]) continue; // 이미 방문했으면 터질 수 없다
                            visited[x+dx][y+dy] = true;
                            q.push({x+dx, y+dy});
                            tempToPop.push_back({x+dx, y+dy});
                        }
                    }
                    if(tempToPop.size() >= 4)
                    {
                        toPop.insert(toPop.end(), tempToPop.begin(), tempToPop.end());
                    }
                }
            }
        }
        if(toPop.size() == 0)
        {
            cout << answer;
            return 0;
        }
        else answer++;
        
        for(auto [x, y] : toPop)  // 터트리기
        {
            field[x][y] = '.';
        }
        // 중력으로 빈칸 위에 색깔이 있으면 떨어진다
        int y = 0;
        while (y < 6)
        {
            bool isChanged = false;
            int x = 0;
            while (x < 12)
            {
                if(field[x][y] != '.' && x+1 < 12 && field[x+1][y] == '.')
                {
                    field[x+1][y] = field[x][y];
                    field[x][y] = '.';
                    isChanged = true;
                }
                x++;
            }
            if (isChanged) y = 0;  // 다시 확인
            else y++;
        }
    }

    return 0;
}