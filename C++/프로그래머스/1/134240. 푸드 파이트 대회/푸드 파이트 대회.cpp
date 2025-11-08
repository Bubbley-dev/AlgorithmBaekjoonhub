#include <string>
#include <vector>
#include <list>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    list<int> f(1, 0);
    
    auto wt = f.begin();  // 물 위치
    
    int i = food.size()-1;  // 마지막 음식부터 앞뒤로 배치
    while (i>0)
    {
        if (food[i] >= 2)
        {
            f.push_front(i);
            f.push_back(i);
            food[i] -= 2;
        }
        else
        {
            i--;
        }
    }
    
    for (auto it = f.begin(); it!=f.end(); it++)
    {
        answer += *it + '0';
    }
    
    return answer;
}