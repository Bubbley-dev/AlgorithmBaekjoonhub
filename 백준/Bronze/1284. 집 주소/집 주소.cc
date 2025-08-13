#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    string str;
    int width;
    while(true)
    {
        cin >> str;
        if (str == "0") return 0;
        width = 2;  // 좌우 여백
        // 자간 여백
        width += (str.size() - 1);
        for (char c : str)
        {
            if (c == '0') width += 4;
            else if (c == '1') width += 2;
            else width += 3;
        }
        cout << width << "\n";
    }
    return 0;
}