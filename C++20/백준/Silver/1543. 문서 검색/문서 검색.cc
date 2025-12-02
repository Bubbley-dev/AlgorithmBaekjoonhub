#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    string text, keyword;
    getline(cin, text);
    getline(cin, keyword);
    
    int tl = text.length(), kl = keyword.length(), i=0, ans = 0;

    while (i<tl)
    {
        if (text.substr(i, kl) == keyword)
        {
            ans++;
            i += kl;
        }
        else i++;
    }
    
    cout << ans;
    
    return 0;
}