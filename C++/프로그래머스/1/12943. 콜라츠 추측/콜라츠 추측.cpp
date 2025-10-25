#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    for (int i=0; i<501; i++)
    {
        if (num == 1) return answer;
        answer++;
        if (num % 2 == 1) num = (num*3)+1;
        else num/=2;
    }
    return -1;
}