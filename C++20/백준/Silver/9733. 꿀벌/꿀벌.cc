#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cout<<fixed;
    cout.precision(2);
    
    unordered_map<string, float> cnt;
    string s;
    while (cin>>s)
    {
        cnt[s]++;
        cnt["Total"]++;
    }
    
    string works[] = {"Re","Pt","Cc","Ea","Tb","Cm","Ex", "Total"};
    
    for(string s : works)
    {
        cout << s << " " << (int)cnt[s] << " " << cnt[s]/cnt["Total"] << "\n";
    }
    
    return 0;
}