#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int a = 0;
    string w;
    cin >> w;

    for (auto& c : w)
    {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') a++;
    }

    cout << a;

    return 0;
}