#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    // n을 3진법으로 변환
    string tri = "";
    while (n > 0)
    {
        // 나머지 연산 (0, 1, 2)
        int rem = n % 3;
        // 문자열 앞에 붙이기
        char add = rem + '0';
        tri = add + tri;
        // n 나누기
        n /= 3;
    }
    
    // 뒤집어서 10진법으로 표현 -> 앞에서부터 읽으면 됨
    for (int i=0; i<tri.length(); i++)
    {
        answer += pow(3, i) * (tri[i]-'0');
    }
    
    return answer;
}