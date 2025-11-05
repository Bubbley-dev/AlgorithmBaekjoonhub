#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> alp(26, -1);  // 마지막으로 나온 숫자 위치
    vector<int> answer;
    
    for (int i=0; i<s.length(); i++)
    {
        answer.push_back(alp[s[i]-'a'] == -1 ? -1 : i-alp[s[i]-'a']);
        alp[s[i]-'a'] = i;
    }
    
    return answer;
}