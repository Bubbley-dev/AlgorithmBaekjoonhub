#include <string>
#include <vector>

using namespace std;

void add(int* s, int n)
{
    *s = (*s) * 10 + n;
}

int solution(string s) {
    int answer = 0;
    int i=0;
    while (i<s.size())
    {
        char c = s[i];
        switch (c)
        {
            case 'z':  // 0
                add(&answer, 0);
                i += 4;
                break;
            case 'o':  // 1
                add(&answer, 1);
                i += 3;
                break;
            case 't':  // 2, 3
                if (s[i+1] == 'w')
                {
                    add(&answer, 2);
                    i += 3;
                } else {
                    add(&answer, 3);
                    i += 5;
                }
                break;
            case 'f':  // 4, 5
                if (s[i+1] == 'o') add(&answer, 4);
                else add(&answer, 5);
                i += 4;
                break;
            case 's': // 6, 7
                if (s[i+1] == 'i')
                {
                    add(&answer, 6);
                    i += 3;
                } else {
                    add(&answer, 7);
                    i += 5;
                }
                break;
            case 'e': // 8
                add(&answer, 8);
                i += 5;
                break;
            case 'n': // 9
                add(&answer, 9);
                i += 4;
                break;
            default:  // 숫자
                add(&answer, c - '0');
                i += 1;
        }
    }
    return answer;
}