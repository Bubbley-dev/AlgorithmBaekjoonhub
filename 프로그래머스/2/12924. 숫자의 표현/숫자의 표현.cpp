#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> sum(n+1, 0);
    for (int i=1; i<=n; i++)
    {
        sum[i] = sum[i-1] + i;
    }
    
    int s=0, e=1;
    while (s<e && e<=n)
    {
        int total = sum[e]-sum[s];
        if (total == n)
        {
            answer++;
            e++;
        }
        else if (total > n)
        {
            s++;
        }
        else
        {
            e++;
        }
    }
    
    return answer;
}