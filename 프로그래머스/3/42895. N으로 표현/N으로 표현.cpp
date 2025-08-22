#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>


using namespace std;

int solution(int N, int number) {
    vector<unordered_set<int>> dp(9);
    
    int repeated = N;
    for (int i=1; i<9; i++)
    {
        if (repeated == number) return i;
        dp[i] = {repeated};
        repeated = 10*repeated + N;
    }
    
    for (int i=2; i<9; i++)
    {
        for (int j=1; j<i; j++)
        {
            // 왼쪽 수
            for (int left : dp[j])
            {
                // 오른쪽 수
                for (int right : dp[i-j])
                {
                    // 더하기
                    if (left+right == number) return i;
                    dp[i].insert(left+right);
                    // 곱하기
                    if (left*right == number) return i;
                    dp[i].insert(left*right);
                    // 빼기
                    if (left-right == number) return i;
                    dp[i].insert(left-right);
                    if (right != 0)
                    {
                        // 나누기
                        if (left/right == number) return i;
                        dp[i].insert(left/right);
                    }
                }
            }
        }
    }
    return -1;
}