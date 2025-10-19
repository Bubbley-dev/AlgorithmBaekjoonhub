#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while (n >= a)
    {
        int back = (b * (n/a));
        n = back + (n%a);
        answer += back;
    }
    return answer;
}