#include <iostream>
#include <vector>

using namespace std;

// 북 동 남 서
int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };

//구현
int N, M, r, c, d;

int isValid(int x, int y) { return 0 <= x && x < N && 0 <= y && y < M; }

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    cin >> N >> M >> r >> c >> d;
    vector<vector<int>> space(N, vector<int>(M, 0));
    vector<vector<int>> cleaned(N, vector<int>(M, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> space[i][j];
        }
    }

    int answer = 0;
    int nr = r;
    int nc = c;

    while (true)
    {
        // 현재 칸이 청소되지 않은 경우 청소한다. (카운팅)
        if (!cleaned[r][c])
        {
            cleaned[r][c] = 1;
            answer++;
        };
        // 현재 칸의 주변 4칸 중 청소되지 않은 빈 칸이
        int flag = 0;
        for (int i = 0; i < 4; i++)
        {
            nr = r + dr[i]; 
            nc = c + dc[i];
            // 범위 안이고, 벽이 아니고, 청소하지 않았나?
            if (isValid(nr, nc) && !space[nr][nc] && !cleaned[nr][nc])
            {
                flag = true;
                break;
            }
        }
        // 없는 경우
        if (!flag)
        {
            // 바라보는 방향을 유지한 채로 후진할 수 있다면(범위 안이고, 빈 칸이면) 후진 -> 다시 수행
            nr = r + dr[(d + 2) % 4];
            nc = c + dc[(d + 2) % 4];
            if (isValid(nr, nc) && !space[nr][nc])
            {
                r = nr;
                c = nc;
                continue;
            }
            //후진할 수 없다면 작동을 멈춘다
            else { break; }
        }
        // 있는 경우
        else
        {
            // 반 시계방향으로 90도 회전한다
            d = (d+3) % 4;
            // 바라보는 방향 기준으로 앞쪽 칸이 청소되지 않은 빈 칸인 경우 한 칸 전진한다.
            nr = r + dr[d];
            nc = c + dc[d];
            if (isValid(nr, nc) && !space[nr][nc] && !cleaned[nr][nc])
            {
                r = nr;
                c = nc;
            }
        }
    }

    cout << answer;

    return 0;
}