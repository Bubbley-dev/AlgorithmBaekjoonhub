#include <bits/stdc++.h>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    int nxt;
    for (char c : s)
    {
        if (c == ' ')
        {
            answer += " ";
            continue;
        }
        // else
        if ('a' <= c && c <= 'z')
        {
            // 소문자
            nxt = c + n;
            if (nxt > 'z') nxt -= 26;
        }
        else
        {
            // 대문자
            nxt = c + n;
            if (nxt > 'Z') nxt -= 26;
        }
        answer += nxt;
    }
    
    return answer;
}