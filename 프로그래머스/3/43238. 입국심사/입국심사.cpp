#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    
    sort(times.begin(), times.end());  // 빠른 순 정렬
    long long minTime = 1;  // 최소 경우
    long long maxTime = (long long) n * (long long) times.back();  // 가장 느린 경우
    
    long long checkTime;
    
    while(minTime <= maxTime)
    {
        // checkTime동안 각 심사관은 몇 명 처리할 수 있나?
        checkTime = (minTime+maxTime) / 2;
        long long complete = 0;
        for(int time : times)
        {
            complete += checkTime / (long long)time;  // 해당 시간 동안 처리할 수 있는 인원 파악
        }
        
        if (complete >= n) {
            answer = checkTime;
            maxTime = checkTime - 1;  // 처리 가능하면 최대시간 축소
        } else {
            minTime = checkTime + 1;  // 불가능하면 최소시간 늘림
        }
    }
    
    return answer;
}