#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> ans;
    
    vector<int> solve1{1, 2, 3, 4, 5};  // 5반복
    vector<int> solve2{2, 1, 2, 3, 2, 4, 2, 5};  // 8반복
    vector<int> solve3{3, 3, 1, 1, 2, 2, 4, 4, 5, 5};  // 10반복
    
    // 채점
    vector<int> check(3, 0);
    for (int i=0; i<answers.size(); i++)
    {
        int answer = answers[i];
        // 1번
        if (answer == solve1[i%5]) check[0]++;
        // 2번
        if (answer == solve2[i%8]) check[1]++;
        // 3번
        if (answer == solve3[i%10]) check[2]++;
    }
    
    int hightest = *max_element(check.begin(), check.end());
    
    for(int i=1; i<=3; i++)
    {
        if (check[i-1] == hightest) ans.push_back(i);
    }
    
    return ans;
}