#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    bool flag = true;
    
    for (int i=l; i<=r; i++){
        string n = to_string(i);
        flag = true;
        for (int j=0; j<n.length(); j++){
            if (n[j] != '5' && n[j] != '0') {
                flag = false;
                break;
            }
        }
        
        if (flag) {answer.push_back(i);}
    }
    if (answer.size() == 0) {answer = {-1};}
    
    return answer;
}