#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, q;
    cin >> n >> q;
    vector<int> v(n+1);
    for (int i=1; i<n+1; i++) cin >> v[i];
    sort(v.begin(), v.end());
    
    for (int i=1; i<n+1; i++) v[i] += v[i-1];
    
    int l, r;
    for (int i=0; i<q; i++)
    {
        cin >> l >> r;
        cout << v[r]-v[l-1] << "\n";
    }
    
    return 0;
}