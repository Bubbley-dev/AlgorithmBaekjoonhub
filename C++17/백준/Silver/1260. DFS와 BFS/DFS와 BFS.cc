#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int N, M, V;
	cin >> N >> M >> V;
	// N : 정점의 개수 (1~N)
	// M : 간선의 개수
	// V : 시작 정점

	// 인접행렬
	vector<vector<int>> graph(N + 1, vector<int>(N + 1));

	for (int i = 0; i < M; i++) {
		int s, e;
		cin >> s >> e;

		graph[s][e] = 1;
		graph[e][s] = 1;
	}

	
	// dfs
	vector<int> dvisited(N + 1);
	vector<int> stk;
	int nowv = V;
	cout << V;
	
	while (true) {
		// 현위치에서 갈 수 있는 위치 탐색
		bool flag = false;
		for (int nextv = 1; nextv <= N; nextv++) {
			if (graph[nowv][nextv] == 1 && dvisited[nextv]==0) {
				dvisited[nowv] = 1;
				stk.push_back(nowv);
				flag = true;
				nowv = nextv;
				cout << ' ' << nowv;
				break;
			}
		}
		if (flag == false) {
		// 더이상 갈 수 있는 곳이 없으면
			if (stk.size() != 0) {
			// stk이 남아 있다면
				dvisited[nowv] = 1;
				nowv = stk.back();
				stk.pop_back();
			}
			else {
				break;
			}
		}
	}
	cout << endl;

	// bfs
	vector<int> bvisited(N + 1);
	vector<int> q;

	q.push_back(V);
	bvisited[V] = 1;
	cout << V;

	while (q.size() != 0) {
		nowv = q.front();
		q.erase(q.begin());
		bool flag = false;
		for (int nextv = 1; nextv <= N; nextv++) {
			if (graph[nowv][nextv] == 1 && bvisited[nextv] == 0) {
				flag = true;
				q.push_back(nextv);
				bvisited[nextv] = 1;
				cout << ' ' << nextv;
			}
		}
	}
	cout << endl;

	return 0;
}

