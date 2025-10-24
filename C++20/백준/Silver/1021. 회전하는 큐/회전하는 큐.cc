#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, M;
    cin >> N >> M;

    int cnt = 0;
    deque<int> dq;

    for (int i=1; i<=N; i++)
    {
        dq.push_back(i);
    }

    int t;
    while (M--)
    {
        cin >> t;
        auto it = find(dq.begin(), dq.end(), t);
        int dist = it - dq.begin();
        bool isCloseLeft = dist <= dq.size() / 2 ? true : false;  // 왼쪽에 가까운가?
        if (isCloseLeft)
        {
            for (int i=0; i<dist; i++)
            {   // 왼쪽으로 회전
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        else
        {
            dist = dq.size() - dist;
            for (int i=0; i<dist; i++)
            {   // 오른쪽으로 회전
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
        dq.pop_front();  // 1번 연산
    }

    cout << cnt;

    return 0;
}