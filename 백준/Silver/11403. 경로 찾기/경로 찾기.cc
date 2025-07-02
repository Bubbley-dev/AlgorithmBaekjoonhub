#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N;
    cin >> N;

    // 입력
    vector<vector<int>> graph(N, vector<int>(N, 0));
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            cin >> graph[i][j];
        }
    }

    // 플로이드 워셜 알고리즘
    // i와 j까지 가는 경로 중 k를 걸치는 경우 연결되어있음을 갱신
    for (int k=0; k<N; k++)
    {
        for (int i=0; i<N; i++)
        {
            for (int j=0; j<N; j++)
            {
                if (graph[i][k] && graph[k][j]) graph[i][j] = 1;  // k를 걸쳐서 연결되어 있다.
            }
        }
    }

    // 출력
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            cout << graph[i][j];
            if (j < N-1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}