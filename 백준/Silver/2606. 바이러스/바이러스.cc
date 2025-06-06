#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int nodeCount, edgeCount, i, a, b;
    cin >> nodeCount;
    cin >> edgeCount;

    if (nodeCount < 2)
    {
        cout << 0;
        return 0;
    }

    vector<vector<int>> graph(nodeCount+1, vector<int> (nodeCount+1, 0));
    vector<int> result(nodeCount+1, 0);
    vector<int> visited(nodeCount+1, 0);
    stack<int> candi;

    for (i=0; i<edgeCount; i++)
    {
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    // 1번부터 감염
    result[1] = 1;
    visited[1] = 1;
    candi.push(1);

    while (!candi.empty())
    {
        // 감염된 컴퓨터 꺼내기
        a = candi.top();
        candi.pop();
        visited[a] = 1;

        // 감염된 컴퓨터와 연결된 컴퓨터 중 확인하지 않은 컴퓨터 찾기
        for (i=1; i<nodeCount+1; i++)
        {
            if (graph[a][i] && !visited[i])
            {
                // 감염 처리
                result[i] = 1;
                candi.push(i);
            }
        }
    }

    int ans = 0;
    for(i = 2; i < nodeCount+1; i++)
    {
        if (result[i]) ans++;
    }

    cout << ans;

    return 0;
}