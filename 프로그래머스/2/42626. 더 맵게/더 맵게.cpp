#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq; // 내림차순
    
    // 우선순위큐 처리
    for(int s : scoville)
    {
        pq.push(s);
    }
    
    // 작은 것부터 꺼내서 처리
    int s1, s2, sn;  // 각각 가장 작은 두 지수와 새로운 지수
    while (pq.top() < K && pq.size() > 1)
    {
        answer++;
        // 두개 꺼내기
        s1 = pq.top();
        pq.pop();
        s2 = pq.top();
        pq.pop();
        
        // 섞어서 합치기
        sn = s1 + (s2 * 2);
        pq.push(sn);
    }
    
    // 만약 남은 음식이 1개 이하인데 기준치 이하면 -1 리턴
    if (pq.size() == 1 && pq.top() < K) return -1;
    
    // 아니면 결과 리턴
    return answer;
}