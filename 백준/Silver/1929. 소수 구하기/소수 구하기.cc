#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int n, m, flag = 0;
    cin >> n >> m;
    if (n==1) n = 2;
    
    vector<int> arr;

    for(int i = n; i <= m; i++)
    {
        flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag) arr.push_back(i);
    }

    for (int j : arr)
    {
        cout << j << "\n";
    }

    return 0;
}