#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    string at = "", sp = "";
    for (int i=0; i<n; i++)
    {
        at+="@";
        sp+=" ";
    }
    
    // 첫번째줄
    for (int i=0; i<n; i++)
    {
        cout<<at<<at<<at<< sp << at <<"\n";
    }
    
    // 2~4번째줄
    for (int i=0; i<n*3; i++)
    {
        cout<<at<<sp<<at<<sp<<at<<"\n";
    }
    
    // 마지막줄
    for (int i=0; i<n; i++)
    {
        cout<<at<<sp<<at<<at<<at<<"\n";
    }
    
    return 0;
}