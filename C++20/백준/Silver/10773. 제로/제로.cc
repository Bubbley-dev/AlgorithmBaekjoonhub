#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    unsigned long n;
    cin >> n;
    
    vector<unsigned long> v(n);
    int i = 0;
    while(n--)
    {
        cin >> v[i];
        if (v[i]==0) i--;
        else i++;
    }
    
    cout << accumulate(v.begin(), v.begin()+i, 0);
    
    return 0;
}