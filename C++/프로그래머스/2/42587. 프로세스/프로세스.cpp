#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int n;

int findNext(vector<int> &p, vector<int> &v)
{
    // 가장 먼저 실행되어야 할 프로세스 번호 찾기
    int nxtP = 0;
    for (int i=0; i<n; i++)
    {
        if (v[i]) continue;
        if (nxtP < p[i])
        {
            nxtP = p[i];
        }
    }
    return nxtP;
}

int solution(vector<int> priorities, int location) {
    n = priorities.size();
    vector<int> v(n, 0);
    
    int nxtP = findNext(priorities, v);
    
    int answer = 1;
    queue<int> q;
    
    for (int i=0; i<n; i++)
    {
        q.push(i);
    }
    
    while(true)
    {
        int i = q.front(); q.pop();
        if (priorities[i] != nxtP)
        {
            q.push(i);
        }
        else  // i == nxtI => 실행할 것
        {
            if (i == location) return answer;
            answer++;
            v[i] = 1;
            nxtP = findNext(priorities, v);
        }
    }
    
    return answer;
}