#include <iostream>
#include <list>

using namespace std;
typedef unsigned long long ULL;

struct node
{
    ULL size;
    int pp; // Primary Position (초기 위치)
};
typedef list<node>::iterator IT;
list<node> mic;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N;
    cin >> N;
    
    ULL t;
    for (int i=1; i<=N; i++)
    {
        cin >> t;
        node m = {t, i};
        mic.push_back(m);
    }

    // 맨 앞부터 순회
    IT cur, it;
    ULL next;
    while (mic.size() > 1)
    {
        for (it = mic.begin(); it != mic.end(); it++)
        {
            cur = it;
            next = it->size;
            if (it != mic.begin())
            {
                cur--; // 앞의 미생물
                if (cur->size <= it->size)
                {
                    next += cur->size;
                    mic.erase(cur);
                }
                cur = it;
            }
            cur++;
            if (cur != mic.end())
            {
                // 뒤의 미생물
                if (cur->size <= it->size)
                {
                    next += cur->size;
                    mic.erase(cur);
                }
                cur = it;
            }
            it->size = next;
            if (mic.size() == 1) break;
        }
    }

    cout << mic.front().size << "\n" << mic.front().pp;

    return 0;
}