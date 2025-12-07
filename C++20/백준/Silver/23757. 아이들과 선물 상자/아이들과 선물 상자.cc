#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int N, M, t;
    cin >> N >> M;
    
    priority_queue<int> q;
    for (int i=0; i<N; i++)
    {
        cin >> t;
        q.push(t);
    }
    
    for (int i=0; i<M; i++)
    {
        cin >> t;
        int box = q.top(); q.pop();
        
        if (t > box)
        {
            cout << 0;
            return 0;
        }
        
        q.push(box-t);
    }
    
    cout << 1;
    
    return 0;
}