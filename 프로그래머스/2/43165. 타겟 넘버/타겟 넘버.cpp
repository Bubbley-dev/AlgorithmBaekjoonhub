#include <string>
#include <vector>

using namespace std;

vector<int> numbers;
int target, s;
int answer = 0;

void dfs(int n, int result) {
    // 종료 조건
    if (n == s)
    {
        // 숫자를 모두 사용했을 때 결과값 확인
        if (result == target)
        {
            answer++;
        }
        return;
    }
    
    // 재귀
    // n번째 수를 더하는 경우
    dfs(n+1, result+numbers[n]);
    // n번째 수를 빼는 경우
    dfs(n+1, result-numbers[n]);
}

int solution(vector<int> arr, int t) {
    // 전역 변수 처리
    numbers.assign(arr.begin(), arr.end());
    target = t;
    s = arr.size();
    
    dfs(0, 0);
    
    return answer;
}