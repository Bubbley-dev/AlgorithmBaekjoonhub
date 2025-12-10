#include <bits/stdc++.h>
using namespace std;

set<string> f(string s)
{
    set<string> ret;
    int n=s.length();
    
    for (int i=0; i<n; i++)
    {
        ret.insert(s);
        s = s.substr(1) + s[0];
    }
    
    return ret;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    vector<set<string>> vect;
    
    string s;
    for (int t=0; t<n; t++)
    {
        cin >> s;
        
        if (vect.size()==0)
        {
            vect.push_back(f(s));
            continue;
        }
        
        bool flag = true;
        for (auto v : vect)
        {
            if (v.find(s) != v.end())
            {
                flag = false;
                break;
            }
        }
        if (flag) vect.push_back(f(s));
    }
    
    cout << vect.size();
    
    return 0;
}