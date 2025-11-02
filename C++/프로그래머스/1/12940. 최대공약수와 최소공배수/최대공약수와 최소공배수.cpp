#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    for (int i=min(n, m); i>0; i--)
    {
        if (n%i == 0 && m%i == 0)
        {
            answer.push_back(i);
            break;
        }
    }
    
    answer.push_back(n*m / answer[0]);
    
    return answer;
}