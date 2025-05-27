#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    double n;
    cin >> n;

    double ans = n * n * sqrt(3) / 4;

    cout << fixed;
    cout.precision(9);
    cout << ans;

    return 0;
}