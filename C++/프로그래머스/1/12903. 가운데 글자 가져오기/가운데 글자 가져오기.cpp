#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    switch (s.length() % 2)
    {
        case 1:    
            return s.substr(s.length()/2, 1);
            break;
        case 0:
            return s.substr(s.length()/2 - 1, 2);
            break;
    }
}