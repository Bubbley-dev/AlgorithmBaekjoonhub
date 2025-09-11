#include <iostream>
#include <vector>
using namespace std;

int solution(int n)
{
    int ans = 0;
    
    while(n>0)
    {
        // 순간이동 전의 위치
        if (n % 2 == 1)
        {
            // n이 홀수면 1빼기
            ans++;
            n -= 1;
        }
        n /= 2;
    }

    return ans;
}