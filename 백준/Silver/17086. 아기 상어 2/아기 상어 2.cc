#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int isValid(int x, int y)
{
    return 0 <= x && x < N && 0 <= y && y < M;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    vector<vector<int>> sharks(N, vector<int>(M));
    vector<vector<int>> dist(N, vector<int>(M, -1));
    queue<pair<int, int>> q;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> sharks[i][j];
            if (sharks[i][j])
            {
                dist[i][j] = 0;
                q.push({i, j});  // 상어가 있는 칸을 시작점으로 BFS
            }
        }
    }

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        for (int d = 0; d < 8; d++)
        {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (isValid(nx, ny) && dist[nx][ny] == -1)
            {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    int maxDis = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (dist[i][j] > maxDis) maxDis = dist[i][j];
        }
    }

    cout << maxDis;

    return 0;
}