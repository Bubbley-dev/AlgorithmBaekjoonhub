#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    string s;
    cin >> s;
    vector<int> alphabets(26, 0);

    for(char c : s)
    {
        alphabets[c-'a']++;
    }

    for(int n : alphabets)
    {
        cout << n << " ";
    }

    return 0;
}