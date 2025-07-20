#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int x, y;
    cin >> x >> y;
	if (x > y) cout << "flight";
	else cout << "high speed rail";


    return 0;
}