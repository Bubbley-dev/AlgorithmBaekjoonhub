#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> stk;
    
    int i = 0;
    char last = ' ';
    while (i < s.length())
    {
        if (!stk.empty() && stk.top() == s[i])
        {
            stk.pop();
        } else {
            last = s[i];
            stk.push(s[i]);
        }
        i++;
    }
    
    
    if (stk.empty()) return 1;
    else return 0;
    
}