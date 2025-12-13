#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> dict;
    
    string t, num;
    for (int i=1; i<n+1; i++)
    {
        cin >> t;
        num = to_string(i);
        dict[num] = t;
        dict[t] = num;
    }
    
    while (m--)
    {
        cin >> t;
        cout << dict[t] << "\n";
    }
    
    return 0;
}