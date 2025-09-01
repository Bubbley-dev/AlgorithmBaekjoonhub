#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const vector<int>&a, const vector<int>&b){
    //끝점 기준 정렬
    if(a[1]==b[1]) return a[0]<b[0];
    return a[1]<b[1];
}

int solution(vector<vector<int>> targets) {
    int answer = 0;
    
    sort(targets.begin(), targets.end(), cmp);
    
    int shooted = 0;  // 마지막으로 쏜 x값 (값-0.5 구간이라고 가정:요격범위 겹치지 않음)
    for(vector<int> t : targets)
    {
        int s = t[0], e = t[1];  // 개구간
        if (s >= shooted)
        {   // 마지막으로 쏜 위치가 요격하지 못함
            answer++;  // 요격 횟수 추가
            shooted = e;  // 가장 뒤쪽에 쏴서 최대한 많은 시작점이 들어오도록 함.
        }
    }
    
    return answer;
}