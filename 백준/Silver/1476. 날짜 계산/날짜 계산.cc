#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int E, S, M;
    cin >> E >> S >> M;

    // E : 1~15
    // S : 1~28
    // M : 1~19

    int ans = 1, e = 1, s = 1, m = 1;

    while(true)
    {
        if (e == E && s == S && m == M)
        {
            cout << ans;
            return 0;
        }
        
        ans++;
        
        e++;
        s++;
        m++;
        
        if(e>15) e=1;
        if(s>28) s=1;
        if(m>19) m=1;
    }


    return 0;
}