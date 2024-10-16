#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int prev, now, inc;
    
    for (int i=1; i<numLog.size(); i++){
        prev = numLog[i-1];
        now = numLog[i];
        inc = now - prev;
        switch (inc){
            case 1:
                answer += 'w';
                break;
            case -1:
                answer += 's';
                break;
            case 10:
                answer += 'd';
                break;
            case -10:
                answer += 'a';
                break;
        }
    }
    
    return answer;
}