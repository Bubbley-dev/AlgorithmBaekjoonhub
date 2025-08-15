#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int n;
    cin >> n;
    n = 1000 - n;

    int cnt = 0;
    vector<int> arr = {500, 100, 50, 10, 5, 1};

    for (int m : arr)
    {
        if (n >= m)
        {
            int c = n / m;
            n %= m;
            cnt += c;
        }
    }

    cout << cnt;

    return 0;
}