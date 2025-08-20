#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    // mapping
    map<string, int> part;
    for (string p : participant)
    {
        part[p]++;  // 각 이름별로 인원 수 파악
    }
    
    for (string c : completion)
    {
        part[c]--;  // 도착 처리
    }
    
    for (string p : participant)
    {
        if (part[p] == 1)  // 한 명 남아있으면 미완주자
        {
            return p;
        }
    }
    
    return answer;
}