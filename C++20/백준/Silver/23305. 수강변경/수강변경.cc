#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, ans=0;
    cin >> n;
    map<int, int> cur;
    map<int, int> want;
    
    int input;
    
    for (int i=0; i<n; i++)
    {
        cin >> input;
        cur[input]++;
    }
    for (int i=0; i<n; i++)
    {
        cin >> input;
        want[input]++;
    }
    
    for(auto it : want)
    {
        // it.first : 원하는 과목, it.second : 원하는 사람 수
        // cur[it.first] : 교환 가능 인원
        // 교환 가능 인원보다 원하는 사람이 많으면 못 듣는 사람 발생
        if (cur[it.first] < it.second) ans += it.second - cur[it.first];
    }
    
    cout<<ans;

    return 0;
}