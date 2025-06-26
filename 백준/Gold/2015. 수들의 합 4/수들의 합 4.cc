#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, i;
    long long K, ans;

    cin >> N >> K;
    
    // [질문게시판 및 블로그 참고]
    // i부터 j까지 일 때 S[j]-K = S[i-1]
    // Map으로 각 누적합에 대한 개수 저장하여 카운팅
    // https://dev-minji.tistory.com/102
    vector<int> A(N+1, 0);
    vector<long long> S(N+1, 0);
    map<long long, long long> M;

    ans = 0;
    M[0] = 1;  // S[j] == K일 경우 S[i-1]은 0이 된다.
    for (i=1; i<N+1; i++)
    {
        cin >> A[i];
        S[i] = S[i-1] + A[i];

        // M[x] : 누적합이 x였던 경우의 수
        // S[i]를 체크하기 전에 구하는 이유 : S[i]의 경우의수가 들어가면 안되므로.
        ans += M[S[i]-K];

        // Map에 S[i] 저장
        M[S[i]]++;
    }

    cout << ans;

    return 0;
}