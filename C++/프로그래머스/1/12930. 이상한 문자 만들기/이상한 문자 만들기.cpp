#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int lastBlank = -1;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == ' ')
        {
            lastBlank = i;
            answer += ' ';
            continue;
        }
        bool isUpper = 'A' <= s[i] && s[i] <= 'Z';
        char nxt = s[i];
        if ((i+lastBlank)%2 == 0)  // 홀수 : 소문자
        {
            if (isUpper) nxt = s[i] - 'A' + 'a';
        }
        else // 짝수 : 대문자
        {
            if (!isUpper) nxt = s[i] - 'a' + 'A';
        }
        answer += nxt;
    }
    
    return answer;
}