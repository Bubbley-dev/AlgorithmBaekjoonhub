#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0, n = A.size();
    
    // 큰 수 X 작은 수로 조합
    // A는 정방향, B는 역방향으로 정렬
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    
    for (int i=0; i<n; i++)
    {
        answer += A[i] * B[i];
    }

    return answer;
}