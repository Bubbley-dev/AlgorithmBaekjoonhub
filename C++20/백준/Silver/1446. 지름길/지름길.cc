#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dist, ans;

void solve(vector<vector<pair<int, int>>>& arr, int i, int d)
{
    // 현재위치 i, 현재 온 거리 d
    if (i == dist)
    {
        ans = min(ans, d);  // 최솟값 갱신
    }

    if (d >= ans || i > dist) return;  // 가지치기

    for (auto p : arr[i])
    {
        solve(arr, p.first, d + p.second);
    }
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int n, e;
    cin >> n >> e;
    dist = e; ans = e;
    vector<vector<pair<int, int>>> arr(e);
    for (int i = 0; i < e; i++)
    {
        arr[i].push_back({ i + 1, 1 });  // i에서는 i+1까지 1의 거리로 갈 수 있는 경로가 있다.
    }

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= e) continue;
        arr[a].push_back({ b, c });  // 지름길 우선 탐색
    }

    solve(arr, 0, 0);

    cout << ans;

    return 0;
}