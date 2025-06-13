#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int c;
    string t;

    //구현
    while (true)
    {
        getline(cin, t);
        if (t.length() == 1 && t[0] == '#') return 0;
        c = 0;
        for (auto& a : t)
        {
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
            a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
            {
                c++;
            }
        }
        cout << c << '\n';
    }

    return 0;
}