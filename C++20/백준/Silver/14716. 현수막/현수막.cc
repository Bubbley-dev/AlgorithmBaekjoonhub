#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

map<pair<int, int>, int> v;
int N, M;
int arr[251][251];
int d[8][2] = {
    {0, 1},
    {1, 1},
    {1, 0},
    {1, -1},
    {0, -1},
    {-1, -1},
    {-1, 0},
    {-1, 1},
};

bool isValid(int r, int c) {return 0<=r && r<M && 0<=c && c<N;}

pair<int, int> findStart()
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if ((*it).second == 0) return (*it).first;  // 방문하지 않은 지점 반환
    }
    return {-1, -1};  // 시작 지점 없음
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    cin >> M >> N;
    int ans = 0;
    for (int i=0; i<M; i++)
    {
        for (int j=0; j<N; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j]) v[{i, j}] = 0;
        }
    }

    queue<pair<int, int>> q;
    auto start = findStart();

    while (start.first != -1)
    {
        // start 기준으로 글자 확인
        ans++;
        q.push(start);
        v[start] = 1;
        while (!q.empty())
        {
            auto node = q.front(); q.pop();
            for (auto [dr, dc] : d)
            {
                int nr = node.first+dr, nc = node.second+dc;
                if (isValid(nr, nc) && arr[nr][nc] && !v[{nr, nc}])
                {
                    q.push({nr, nc});
                    v[{nr, nc}] = 1;
                }
            }
        }

        // 끝났으면 start 갱신
        start = findStart();
    }

    cout << ans;

    return 0;
}