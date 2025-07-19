#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, K;
    cin >> N >> K;

    int l = 0, r = 0, m = 0;
    vector<int> arr(N);  // 전체 수열
    vector<int> check(100001, 0);  // check[i] : 현재 arr[l] ~ arr[r] 숫자 i가 몇 개 있나?

    for (int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        if (r >= N+1)  // 배열 끝에 도달
        {
            m = max(m, r-l-1);  // 길이 갱신 확인 후 종료
            break;
        }

        // 배열을 늘렸는데 최근 숫자가 k개 미만이면, 더 늘릴 수 있다.
        if (check[arr[r]] < K)
        {
            check[arr[r]]++; // 현재 숫자 카운팅하고
            r++;  // 부분 배열 늘리기
        }
        else  // 최근 숫자가 k가 k개 이상이면, 최대 길이.
        {
            m = max(m, r-l);  // 최대 길이 갱신
            check[arr[l]]--;  // l을 당겨서 배열 크기 줄어듦
            l++;  // 시작점 뒤로 옮겨짐
        }
    }

    cout << m;


    return 0;
}