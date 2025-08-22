#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<vector<int>> link(n+1, vector<int>(n+1, 0));
    
    // 인접행렬 작성
    for (vector<int> e : edge)
    {
        link[e[0]][e[1]] = 1;
        link[e[1]][e[0]] = 1;
    }
    
    // 거리 체크 (최대값 n)
    vector<int> dist(n+1, 0);
    int maxDist = 0;
    
    // bfs 필요
    queue<int> q;
    q.push(1);
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        maxDist = maxDist < dist[node] ? dist[node] : maxDist;
        for(int nxt=2; nxt<n+1; nxt++)
        {
            if (link[node][nxt] == 1 && dist[nxt] == 0)
            {
                // 방문하지 않은 연결된 노드 : 거리 = 현재거리+1
                dist[nxt] = dist[node] + 1;
                q.push(nxt);
            }
        }
    }
    
    for (int d : dist)
    {
        if (d == maxDist) answer++;
    }
    
    return answer;
}