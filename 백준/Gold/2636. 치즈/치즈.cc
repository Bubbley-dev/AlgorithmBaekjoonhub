#include <iostream>
#include <queue>

using namespace std;

int N, M;

int isValid(int i, int j)
{
    return (i>=0 && i<N && j>=0 && j<M);
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //입력
    cin >> N >> M;  // 세로, 가로

    int cz[N][M] = {0, };  // 치즈 입력
    int totalCz = 0;  // 치즈 개수 저장

    int time = 0;  // 시간;
    int lastMelted = 0;  // 마지막에 녹은 치즈

    int r, c;
    for (r=0; r<N; r++)  // 입력 받기
    {
        for (c=0; c<M; c++)
        {
            cin >> cz[r][c];
            if (cz[r][c]==1) totalCz++;
        }
    }

    int dr[4] = {0, 1, 0, -1};
    int dc[4] = {1, 0, -1, 0};

    int melted, nr, nc = 0;
    queue<pair<int, int>> q;
    queue<pair<int, int>> melt;
    while (melted < totalCz)  // 치즈가 모두 녹을때까지 반복
    {
        time++; // 시간 증가
        int visited[N][M] = {0, };
        visited[0][0] = 1;
        q.push(make_pair(0, 0));
        
        // bfs로 공기와 닿은 칸을 녹인다.
        while (!q.empty())
        {
            r = q.front().first;
            c = q.front().second;
            q.pop();

            for (int d=0; d<4; d++)
            {
                nr = r+dr[d];
                nc = c+dc[d];
                if (isValid(nr, nc) == 0 || visited[nr][nc] == 1) continue;
                visited[nr][nc] = 1;
                if (cz[nr][nc] == 0)
                {
                    q.push(make_pair(nr, nc));
                }
                else
                {
                    melt.push(make_pair(nr, nc));
                }
            }
        }

        // 치즈 녹이기
        lastMelted = melt.size();
        melted += lastMelted;
        while(!melt.empty())
        {
            r = melt.front().first;
            c = melt.front().second;
            melt.pop();
            cz[r][c] = 0;
        }
    }

    cout << time << "\n" << lastMelted;

    return 0;
}