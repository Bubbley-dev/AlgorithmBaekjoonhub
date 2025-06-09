#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, i, t;
    int push = 1;
    cin >> N;

    vector<int> stack;
    vector<char> ans;


    for (i=0; i<N; i++)
    {
        cin >> t;
        while(true)
        {
            // pop 가능한 경우
            if (!stack.empty() && stack.back() == t)
            {
                stack.pop_back();
                ans.push_back('-');
                break;
            }

            // push 가능한 경우
            if (push <= N && push <= t)
            {
                stack.push_back(push++);
                ans.push_back('+');
            }
            // push 불가능 + pop 불가능
            else if (stack.empty() || stack.back() != t)
            {
                cout << 'N' << 'O';
                return 0;
            }
        }
    }

    // 잘 마친 경우
    for (auto& a : ans)
    {
        cout << a << '\n';
    }

    return 0;
}