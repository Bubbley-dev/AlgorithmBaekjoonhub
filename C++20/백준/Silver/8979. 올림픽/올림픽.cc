#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, t, a;
    cin >> n >> t;
    vector<vector<int>> v(n+1, vector<int>(4));
    
    for (int i=0; i<n; i++)
    {
        for (int ii=0; ii<4; ii++)
        {
            cin >> v[i][ii];
        }
    }
    
    sort(v.begin(), v.end(), [](vector<int> a, vector<int> b){
        if (a[1] == b[1])
        {
            if (a[2] == b[2])
            {
                return a[3] > b[3];
            }
            return a[2] > b[2];
        }
        return a[1] > b[1];
    });
    
    for (int i=0; i<n; i++)
    {
        if (v[i][0] == t)
        {
            cout << i;
            return 0;
        }
    }
    
    return 0;
}