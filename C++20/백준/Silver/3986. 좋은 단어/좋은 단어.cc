#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t; cin>>t;
    int ans=0;
    
    string str;
    stack<char> stk;
    while(t--)
    {
        while(!stk.empty())stk.pop();
        cin>>str;
        
        if (str.length()%2==1) continue;  // 홀수 필터링
        
        for(char c : str)
        {
            if (stk.empty() || stk.top()!=c) stk.push(c);
            else stk.pop();
        }
        
        if (stk.empty()) ans++;
    }
    
    cout<<ans;
    
    return 0;
}