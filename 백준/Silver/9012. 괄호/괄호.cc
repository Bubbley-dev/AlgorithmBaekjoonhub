#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int T;
    cin >> T;

    string ps;
    for (int _=0; _<T; _++)
    {
        cin >> ps;
        stack<int> stk;  // 스택 초기화
        int flag = 0;
        for (auto& c : ps)
        {
            if (c == '(') stk.push(1);
            else
            {
                if (!stk.empty()) stk.pop();
                else 
                {
                    // 열린괄호 없음
                    cout << "NO\n";
                    flag = 1;
                    break;
                }
            }
        }
        if (flag) continue;
        // 다 순회하고 stk이 비었으면 YES
        if (stk.empty()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}