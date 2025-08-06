#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int L, C;
vector<char> chars(15);

bool isMoeum(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void solve(int i, string str, int moeumCount, int jaeumCount)
{
    // str : 지금까지 만들어진 문자
    if (str.length() == L)
    {
        if (moeumCount>=1 && jaeumCount>=2) cout << str << "\n";
        return;
    }

    // 인덱스 초과시 리턴
    if (i == C) return;

    // i번째 문자 선택할지 말지
    // 선택하는 경우
    str.push_back(chars[i]);
    solve(i+1, str, moeumCount+isMoeum(chars[i]), jaeumCount+!isMoeum(chars[i]));
    // 선택 안 하는 경우
    str.pop_back();
    solve(i+1, str, moeumCount, jaeumCount);
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    cin >> L >> C;
    chars.resize(C);

    for (int i = 0; i < C; i++)
    {
        cin >> chars[i];
    }

    sort(chars.begin(), chars.end());  // 오름차순 정렬

    solve(0, "", 0, 0);

    return 0;
}