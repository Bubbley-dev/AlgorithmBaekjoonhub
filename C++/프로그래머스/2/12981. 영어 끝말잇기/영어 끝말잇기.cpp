#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2, 0);
    
    set<string> w;
    int cnt = 1, turn = 1;
    for (int i=0; i<words.size(); i++)
    {
        if (w.find(words[i]) != w.end() || (i > 0 && words[i-1].back() != words[i].front()))
        {
            // 중복 단어
            answer[0] = turn;
            answer[1] = cnt;
            break;
        }
        else {
            w.insert(words[i]);
            if (turn == n) {
                turn = 1;
                cnt++;
            } else turn++;
        }
    }

    return answer;
}