#include <string>

using namespace std;

bool solution(string s)
{
    int cnt = 0; // 열린 괄호 수
    
    for(char c : s)
    {
        if (c == '(') cnt++;
        else if (cnt < 1) return false;
        else cnt--;
    }

    if (cnt > 0) return false;
    else return true;
}