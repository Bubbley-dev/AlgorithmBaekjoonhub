#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // 정보
    int N, M, K, X;  // 노드, 간선, 거리, 출발
    cin >> N >> M >> K >> X;

    // 간선 정보
    vector<vector<int>> link(N+1);
    int a, b;
    for(int i=0; i<M; i++)
    {
        cin >> a >> b;
        link[a].push_back(b);
    }
    
    // X부터 출발해서 도달할 수 있는 도시 중, 최단거리가 K인 도시 오름차순
    vector<int> distance(N+1, N+1);  // X로부터의 (최단)거리
    queue<pair<int, int>> nxt;  // 다음 방문지 번호, 거리
    int node, dist;

    distance[X] = 0;
    nxt.push(make_pair(X, 0));

    while(!nxt.empty())
    {
        node = nxt.front().first;
        dist = nxt.front().second;
        nxt.pop();

        // 현 위치에서 갈 수 있는 노드 탐색
        for (auto& i : link[node])
        {
            // 현재 계산된 최단거리가 dist+1보다 크면 갱신하고 다시 탐색
            if (distance[i] > dist+1)
            {
                distance[i] = dist+1;
                nxt.push(make_pair(i, dist+1));
            }
        }
    }

    // 필터링
    vector<int> ans;
    for (int i=1; i<=N; i++)
    {
        if (distance[i] == K) 
        {
            ans.push_back(i);
            cout << i << "\n";
        }
    }

    if (ans.empty()) cout << -1;

    return 0;
}