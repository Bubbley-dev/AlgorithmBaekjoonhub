#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int n = triangle.size();
    vector<vector<int>> dp(n, vector<int> (n, triangle[0][0]));
    
    for (int i=0; i<n-1; i++)
    {   // i번째 줄
        for (int j=0; j<i+1; j++)
        {   // i번째 줄의 j번째 원소
            // i+1번째 줄의 j번째, j+1번째로 합산 가능
            // 원래값 vs 현재 합산값+목적지값 중 큰 값
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]+triangle[i+1][j]);
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+triangle[i+1][j+1]);
        }
    }
    
    // n-1번째 줄에서 가장 큰 수
    return *max_element(dp[n-1].begin(), dp[n-1].end());
}