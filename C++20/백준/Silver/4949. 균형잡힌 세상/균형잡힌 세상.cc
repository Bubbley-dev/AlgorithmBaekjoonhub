#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    unordered_map<char, char> m = {{')', '('}, {']', '['}};
    string t;
    stack<char> s;
    while (true)
    {
        bool flag = false;
        getline(cin, t);
        if (t == ".") return 0;
        
        for (char c : t)
        {
            if (c=='(' || c=='[') s.push(c);
            else if (c==')' || c==']')
            {
                if (!s.empty() && s.top() == m[c]) s.pop();
                else
                {
                    flag = true;
                    break;
                }
            }
        }
        
        if (flag || !s.empty())
        {
            cout << "no\n";
            while(!s.empty())s.pop();
        }
        else cout << "yes\n";
    }
    
    return 0;
}