#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, M;
    cin >> N;
    vector<int> req(N+1, 0);  // 예산이 0인 0번째 도시도 우선 배정
    for (int i=0; i<N; i++)
    {
        cin >> req[i+1];
    }
    cin >> M;  // 예산 최대

    // 모두 지급 가능한 경우 최대값만 출력
    if (accumulate(req.begin(), req.end(), 0) <= M)
    {
        cout << *max_element(req.begin(), req.end());
        return 0;
    }

    sort(req.begin(), req.end());  // 오름차순 정렬
    // i-1번째 도시까지 모두 지급하고 남은 도시에 [i-1]씩 줬을 때 예산이 남고,
    // i번째 도시부터 [i]만큼 지급했을 때 예산이 딱 맞거나 넘치는 경우
    // i-1에서 i 사이를 찾아야 함.

    int low_sum, tempM, tempN, tempAns;
    for (int i=1; i<=N; i++)
    {
        if (req[i] * N > M)
        {
            // i-1번째 도시까지는 전체 지급
            low_sum = accumulate(req.begin(), req.begin()+i, 0);
            // 남은 도시 수
            tempN = N - i + 1;
            if (low_sum + (req[i]*tempN) >= M)
            {
                // i번째 도시부터 N번째 도시까지는 남은 금액 1/N 분배 -> 답
                tempM = M - low_sum;
                cout << tempM/tempN;
                return 0;
            }
        }
    }

    return 0;
}