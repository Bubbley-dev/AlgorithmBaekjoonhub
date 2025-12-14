#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    priority_queue<unsigned long> pq;
    
    unsigned long t;
    while (n--)
    {
        cin >> t;
        if (t != 0)
        {
            pq.push(t);
        } 
        else if (pq.empty())
        {
            cout << 0 << "\n";
        }
        else 
        {
            cout << pq.top() << "\n";
            pq.pop();
        }
    }
    
    return 0;
}