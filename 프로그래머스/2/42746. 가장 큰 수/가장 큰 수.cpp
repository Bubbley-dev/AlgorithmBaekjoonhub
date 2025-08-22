#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> strings;
    for(int n:numbers)
    {
        strings.push_back(to_string(n));
    }
    
    sort(strings.begin(), strings.end(), [](string s1, string s2){
        return s1+s2 > s2+s1;
    });
    
    for(string n:strings)
    {
        answer += n;
    }
    
    // 엣지케이스
    if (answer == string(answer.length(), '0')) return "0";
    
    return answer;
}