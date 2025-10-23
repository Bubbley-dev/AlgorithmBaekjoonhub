#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0, n = p.length();
    
    for (int i=0; i<t.length() - n + 1; i++)
    {
        bool check = true;
        for (int j=0; j<n; j++)
        {
            if (t[i+j] > p[j])
            {   // 큰 숫자
                check = false;
                break;
            }
            else if (t[i+j] < p[j]) break;  // 작은 숫자
        }
        if (check) answer++;
    }
    
    return answer;
}