#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int p, w;
    cin >> p >> w;
    cin.ignore(); // 개행문자 제거
    string str;  // 공백이 포함될 수 있음
    getline(cin, str);

    map<char, int> button = {
        {'A', 2},
        {'B', 2},
        {'C', 2},
        {'D', 3},
        {'E', 3},
        {'F', 3},
        {'G', 4},
        {'H', 4},
        {'I', 4},
        {'J', 5},
        {'K', 5},
        {'L', 5},
        {'M', 6},
        {'N', 6},
        {'O', 6},
        {'P', 7},
        {'Q', 7},
        {'R', 7},
        {'S', 7},
        {'T', 8},
        {'U', 8},
        {'V', 8},
        {'W', 9},
        {'X', 9},
        {'Y', 9},
        {'Z', 9},
        {' ', 1}
    };

    map<char, int> clickTime = {
        {'A', 1},
        {'B', 2},
        {'C', 3},
        {'D', 1},
        {'E', 2},
        {'F', 3},
        {'G', 1},
        {'H', 2},
        {'I', 3},
        {'J', 1},
        {'K', 2},
        {'L', 3},
        {'M', 1},
        {'N', 2},
        {'O', 3},
        {'P', 1},
        {'Q', 2},
        {'R', 3},
        {'S', 4},
        {'T', 1},
        {'U', 2},
        {'V', 3},
        {'W', 1},
        {'X', 2},
        {'Y', 3},
        {'Z', 4},
        {' ', 1}
    };

    int nowButton, beforButton = 0, time = 0;
    for(char c : str)  // 공백이 포함될 수 있음
    {
        nowButton = button[c];
        if (c != ' ' && nowButton == beforButton) time += w;
        time += clickTime[c] * p;
        beforButton = nowButton;
    }

    cout << time;

    return 0;
}