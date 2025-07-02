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
    int N;
    string post;
    cin >> N >> post;

    int dict[N];

    for (int i=0; i<N; i++)
    {
        cin >> dict[i];
    }

    stack<double> temp;
    int num;
    char c;
    double ans, n1, n2;
    for (int i=0; i<post.size(); i++)
    {
        c = post[i];

        // 숫자라면
        if (c >= 'A' && c <= 'Z')
        {
            num = c-'A';
            temp.push(dict[num]);
        }

        // 연산자라면
        else
        {
            n2 = temp.top();
            temp.pop();
            n1 = temp.top();
            temp.pop();

            switch (c)
            {
                case '+':
                    ans = n1 + n2;
                    break;
                case '-':
                    ans = n1 - n2;
                    break;
                case '*':
                    ans = n1 * n2;
                    break;
                case '/':
                    ans = n1 / n2;
                    break;
            }

            temp.push(ans);
        }
    }

    ans = temp.top();
    cout << fixed;
    cout.precision(2);
    cout << ans;

    return 0;
}