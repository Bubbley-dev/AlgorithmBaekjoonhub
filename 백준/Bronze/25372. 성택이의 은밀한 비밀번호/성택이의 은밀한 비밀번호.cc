#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int T;
    cin >> T;

    string str;
    for (int t=0; t<T; t++)
    {
        cin >> str;
        if (str.length() < 6 || str.length() > 9)
        {
            cout << "no\n";
            continue;
        }
        else cout << "yes\n";
    }

    return 0;
}