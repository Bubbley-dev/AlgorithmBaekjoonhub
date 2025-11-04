#include <bits/stdc++.h>

using namespace std;

int answer = 0;
vector<int> num;

void solve(int i, vector<int>& number)
{
    if (i>number.size()) return;
    if (num.size() == 3)
    {
        int s = accumulate(num.begin(), num.end(), 0);
        if (s==0) answer++;
        return;
    }
    
    num.push_back(number[i]);
    solve(i+1, number);
    num.pop_back();
    solve(i+1, number);
}

int solution(vector<int> number) {
    solve(0, number);
    
    return answer;
}