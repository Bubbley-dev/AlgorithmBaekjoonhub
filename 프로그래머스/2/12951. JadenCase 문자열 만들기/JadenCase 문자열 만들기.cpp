#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int aToA = 'A'-'a';
    bool blank = true;
    for (char c : s)
    {
        if (c == ' ')
        {
            answer += c;
            blank = true;
            continue;
        }
        if (blank && 'a' <= c && c <= 'z')
        {   // 공백 다음 소문자일 경우 대문자로 변환
            answer += c + aToA;
            blank = false;
            continue;
        }
        else if (blank)
        {   // 공백인데 소문자는 아니면 그대로 쓰기
            answer += c;
            blank = false;
            continue;
        }
        else if ('A' <= c && c <= 'Z')
        {   // 공백 다음 아니고 대문자면 소문자로 변환
            answer += c - aToA;
            continue;
        }
        else
        {
            answer += c;
            continue;
        }
    }
    
    
    return answer;
}