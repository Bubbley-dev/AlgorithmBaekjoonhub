#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<int> nums;
    
    string num = "";
    int i = 0;
    for(char c : s)
    {
        if (c == ' ')
        {
            nums.push_back(stoi(num));
            num = "";
        } else {
            num += c;
        }
    }
    
    if (num != "") nums.push_back(stoi(num));
    
    int maxVal = *max_element(nums.begin(), nums.end());
    int minVal = *min_element(nums.begin(), nums.end());
    
    string answer = to_string(minVal) + " " + to_string(maxVal);
    return answer;
}