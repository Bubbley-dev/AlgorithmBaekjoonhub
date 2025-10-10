#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer(2);
    
    multiset<int> q;
    
    for (string op : operations)
    {
        if (op[0] == 'I')
        {
            int n = stoi(op.substr(2));
            q.insert(n);
        }
        else if (q.empty()) continue;
        else if (op[2] == '-')
        {
            // 최소값 삭제
            q.erase(q.begin());
        }
        else
        {
            // 최대값 삭제
            q.erase(--q.end());
        }
    }
    
    if (!q.empty())
    {
        answer[0] = *(--q.end());
        answer[1] = *q.begin();
    }
    
    return answer;
}