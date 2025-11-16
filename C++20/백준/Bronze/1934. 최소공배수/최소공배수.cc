#include <iostream>
#include <numeric>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    for (int i = 0; i<t; i++)
    {
        cin >> n >> m;
        cout << lcm(n, m) << endl;
    }
    
    return 0;
}