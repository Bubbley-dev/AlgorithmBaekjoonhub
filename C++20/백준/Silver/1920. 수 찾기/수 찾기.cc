#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n;
    unordered_map<long long, int> nums;
    
    int t;
    while(n--)
    {
        cin >> t;
        nums[t]++;
    }
    
    cin >> m;
    while(m--)
    {
        cin >> t;
        if (nums.find(t) != nums.end()) cout << 1;
        else cout << 0;
        cout << "\n";
    }
    
    return 0;
}