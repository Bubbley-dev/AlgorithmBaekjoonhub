#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<int> visited(n, 0);
    queue<int> network;
    
    for (int i=0; i<n; i++)
    {
        // 컴퓨터를 순회하면서 네트워크 연결 확인
        if (visited[i]) continue;  // 이미 연결된 네트워크 확인됨
        // 0이면 아직 연결 확인 못했다. 네트워크 추가
        answer++;
        visited[i] = 1;
        network.push(i);  // 연결 확인할 네트워크
        while (!network.empty())
        {
            int now = network.front();
            network.pop();  // 꺼내기
            
            for (int j=0; j<n; j++)
            {
                if (j == now) continue;  // 자기 자신은 항상 1
                if (computers[now][j] && !visited[j])
                {   // 연결된 컴퓨터는 방문처리
                    visited[j] = 1;
                    network.push(j);
                }
            }
        }
    }
    
    return answer;
}