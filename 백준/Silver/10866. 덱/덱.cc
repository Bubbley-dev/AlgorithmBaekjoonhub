#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, t;
    string cmd;
    deque<int> dq;

    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> cmd;
        if (cmd == "push_front")
        {
            cin >> t;
            dq.push_front(t);
        }
        else if (cmd == "push_back")
        {
            cin >> t;
            dq.push_back(t);
        }
        else if (cmd == "pop_front")
        {
            if (!dq.empty())
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else cout << -1 << "\n";
        }
        else if (cmd == "pop_back")
        {
            if (!dq.empty())
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            else cout << -1 << "\n";
        }
        else if (cmd == "size")
        {
            cout << dq.size() << "\n";
        }
        else if (cmd == "empty")
        {
            if (dq.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (cmd == "front")
        {
            if (!dq.empty())
            {
                cout << dq.front() << "\n";
            }
            else cout << -1 << "\n";
        }
        else if (cmd == "back")
        {
            if (!dq.empty())
            {
                cout << dq.back() << "\n";
            }
            else cout << -1 << "\n";
        }
    }

    return 0;
}