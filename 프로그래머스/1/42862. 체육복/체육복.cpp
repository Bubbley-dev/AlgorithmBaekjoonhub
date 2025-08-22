#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    // 각 학생별로 체육복이 1벌 있다고 가정
    vector<int> students(n+1, 1);
    students[0] = 0;
    
    // 정렬이 되어있나?
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    // 여벌의 옷을 가진 학생들 체크
    for (int s : reserve)
    {
        students[s]++;
    }
    
    // 잃어버린 학생들 순회
    for (int s : lost)
    {
        students[s]--;  // 잃어버렸다고 체크
    }
    
    // 체육복 빌리기
    for (int i=1; i<=n; i++)
    {
        if (students[i] == 0)
        {
            if (students[i-1] > 1)
            {
                // 앞 친구 먼저 확인
                students[i-1]--;
                students[i]++;
            }
            else if (i < n && students[i+1] > 1)
            {
                // 뒷 친구 확인
                students[i+1]--;
                students[i]++;
            }
        }
    }
    
    // 이제 전체 학생을 순회하며 체육복이 있는 학생 수를 센다.
    int answer = 0;
    for (int i=1; i<=n; i++)
    {
        if (students[i]>0) answer++; 
    }
    
    return answer;
}