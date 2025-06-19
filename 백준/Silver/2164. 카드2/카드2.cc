#include <iostream>
#include <queue>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, i, t;
    cin >> N;

    queue<int> q;

    for (i=0; i<N; i++)
    {
        q.push(i+1);
    }
    
    while (q.size() > 1)
    {
        // 한장 버리기
        q.pop();
        // 맨 앞장 꺼내기
        t = q.front();
        q.pop();
        // 맨 뒤로 다시 넣기
        q.push(t);
    }

    cout << q.front();

    return 0;
}