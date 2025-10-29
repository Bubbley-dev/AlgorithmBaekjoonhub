#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for (int n : arr)
    {
        if (n % divisor == 0) answer.push_back(n);
    }
    
    if (answer.size() == 0) answer.push_back(-1);
    else sort(answer.begin(), answer.end());
    
    return answer;
}