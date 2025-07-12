#include <iostream>
using namespace std;
int main()
{
    int t, ans=0;
    for (int i=0; i<5; i++)
    {
        cin >> t;
        ans+=t;
    }
    cout << ans;
    return 0;
}