#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    string s;
    cin >> s;

    vector<int> cnt(2, 0);
    bool isZero = s[0] == '0';
    if (isZero) cnt[0]++;
    else cnt[1]++;

    for (char c : s)
    {
        if (isZero && c == '0') continue;
        else if (!isZero && c == '1') continue;
        // 숫자가 바뀌면 isZero 반전하고 카운팅
        else {
            isZero = !isZero;
            if (isZero) cnt[0]++;
            else cnt[1]++;
        }
    }

    // 카운팅 한 숫자 중 작은 것만큼 반전시키면 됨
    cout << *min_element(cnt.begin(), cnt.end());

    return 0;
}