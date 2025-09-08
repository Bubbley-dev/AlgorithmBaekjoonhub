#include <string>
#include <vector>

using namespace std;

vector<int> dp(100001, 0);

int fibo(int n)
{
    if (n < 2 || dp[n]) return dp[n];
    dp[n] = (fibo(n-2) + fibo(n-1)) % 1234567;
    return dp[n];
}

int solution(int n) {
    int answer = 0;
    dp[1] = 1;
    
    answer = fibo(n);
    
    return answer;
}