#include <iostream>
#include <vector>
#include <list>
#include <numeric>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, W, L;  // 트럭 수, 다리 길이, 다리 최대 하중
    cin >> N >> W >> L;

    vector<int> truck(N);
    for (int i=0; i<N; i++)
    {
        cin >> truck[i];
    }

    list<int> bridge(W, 0);  // 다리
    vector<int>::iterator p = truck.begin();  // 다음에 올라올 트럭
    int time = 0;
    int reach;
    int nowWeight = 0;
    while (p != truck.end())
    {
        time++;
        // 다리 위 트럭 한 칸씩 당기기
        nowWeight -= bridge.front();
        bridge.pop_front();
        bridge.push_back(0);

        if (nowWeight + *p <= L)
        {
            // 다음 트럭 올라갈 수 있으면 올리기
            bridge.back() = *p;
            nowWeight += *p;
            // 다음에 올라올 트럭 지정
            p++;
        }
    }

    // 다음 트럭이 없으면 while문 탈출
    // => W초 후 마지막 트럭 토착

    cout << time + W;
    
    return 0;
}