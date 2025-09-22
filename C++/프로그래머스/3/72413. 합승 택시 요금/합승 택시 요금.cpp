#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>
#include <iostream>

using namespace std;

vector<int> dijkstra(int start, int n, vector<vector<pair<int,int>>> &graph) {
    vector<int> dist(n+1, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    dist[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty()) {
        auto [cost, node] = pq.top(); 
        pq.pop();
        
        if (cost > dist[node]) continue;
        
        for (auto [nxt, w] : graph[node]) {
            if (dist[nxt] > cost + w) {
                dist[nxt] = cost + w;
                pq.push({dist[nxt], nxt});
            }
        }
    }
    return dist;
}

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    vector<vector<pair<int,int>>> graph(n+1);
    for (auto &f : fares) {
        graph[f[0]].push_back({f[1], f[2]});
        graph[f[1]].push_back({f[0], f[2]});
    }
    
    vector<int> distS = dijkstra(s, n, graph);
    vector<int> distA = dijkstra(a, n, graph);
    vector<int> distB = dijkstra(b, n, graph);
    
    int answer = INT_MAX;
    for (int k=1; k<=n; k++) {
        if (distS[k] == INT_MAX || distA[k] == INT_MAX || distB[k] == INT_MAX) continue;
        answer = min(answer, distS[k] + distA[k] + distB[k]);
    }
    return answer;
}