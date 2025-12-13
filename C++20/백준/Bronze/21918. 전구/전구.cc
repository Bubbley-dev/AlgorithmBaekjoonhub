#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<int> v(n+1);
    for (int i=1; i<n+1; i++) cin >> v[i];
    
    int c, l, r;
    while (m--)
    {
        cin >> c >> l >> r;
        switch(c)
        {
            case 1:
                v[l] = r;
                break;
            case 2:
                while(l<r+1)
                {
                    v[l] = v[l]==1 ? 0 : 1;
                    l++;
                }
                break;
            case 3:
                while(l<r+1)
                {
                    v[l] = 0;
                    l++;
                }
            case 4:
                while(l<r+1)
                {
                    v[l] = 1;
                    l++;
                }
        }
    }
    
    for (int i=1; i<n+1; i++) cout << v[i] << " ";
    
    return 0;
}