#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, std::vector<int>, std::greater<int>> q;
    
    for (int s : score)
    {
        q.push(s);
        if (q.size() > k) q.pop();
        
        answer.push_back(q.top());
    }
    
    
    return answer;
}