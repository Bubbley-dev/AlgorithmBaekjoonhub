#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n, m;
    cin >> n >> m;
    
	vector<vector<int>> adj(n+1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> visit(n+1, 0);
    queue<int> q;
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        if (visit[i]) continue;

        ans++;
        visit[i] = 1;
        q.push(i);

        while (!q.empty())
        {
            int cur = q.front(); q.pop();
            for (int nxt : adj[cur])
            {
                if (!visit[nxt])
                {
                    visit[nxt] = 1;
                    q.push(nxt);
                }
            }
        }
    }
    
    cout << ans;

	return 0;
}