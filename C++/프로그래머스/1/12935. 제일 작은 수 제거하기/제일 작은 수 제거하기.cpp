#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    
    int minNum = *min_element(arr.begin(), arr.end());
    
    for (int n : arr)
    {
        if (n != minNum) answer.push_back(n);
    }
    
    return answer;
}