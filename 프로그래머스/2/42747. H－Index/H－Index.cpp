#include <string>
#include <vector>
#include <algorithm>
//i+1  1 2 3 4 5
//c[i] 6 5 4 3 2

using namespace std;

int solution(vector<int> c) {
    int n = c.size();
    
    sort(c.rbegin(), c.rend());  // 높은 순 정렬
    // -> c[i] 번 이상 인용된 논문 수 i+1개 (자신 포함)
    
    int answer = 0;
    for(int i=0; i<n; i++)
    {
        if(c[i]>i) answer++;
        else return answer;
    }
    return answer;
}