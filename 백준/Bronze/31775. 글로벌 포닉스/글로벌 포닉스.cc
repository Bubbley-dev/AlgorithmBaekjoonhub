#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    map<char, int> check;
    check['l'] = 0;
    check['p'] = 0;
    check['k'] = 0;

    check[s1.front()] = 1;
    check[s2.front()] = 1;
    check[s3.front()] = 1;

    for (auto& b : check)
    {
        if (b.second == 0)
        {
            cout << "PONIX";
            return 0;
        }
    }

    cout << "GLOBAL";
    return 0;
}