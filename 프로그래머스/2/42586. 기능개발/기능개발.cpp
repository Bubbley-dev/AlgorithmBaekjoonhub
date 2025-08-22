#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    // 개발 순서는 상관 없지만, 배포는 순서대로 되어야 함.
    // 작업번호는 idx + 1 주의!!
    int n = progresses.size();
    vector<int> answer;
    
    queue<int> q;  // 작업 순서대로 며칠 걸리는지
    // 각 작업별로 며칠 걸릴지 체크
    for (int i=0; i<n; i++)
    {
        int remain = 100 - progresses[i];
        int days = remain % speeds[i] > 0 ? remain / speeds[i] + 1 : remain / speeds[i];
        
        q.push(days);
    }
    
    int nxt = 0;  // 총 배포된 개수
    // 순서대로 배포
    while (!q.empty())
    {
        // 며칠째 배포인가?
        int day = q.front();
        // 몇 개 배포하는가?
        int cnt = 0;
        while (!q.empty() && q.front() <= day)
        {
            q.pop();
            cnt++; 
            nxt++;
        }
        answer.push_back(cnt);
    }
    
    return answer;
}