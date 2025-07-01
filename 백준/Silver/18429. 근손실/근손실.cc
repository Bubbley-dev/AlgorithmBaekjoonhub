#include <iostream>

using namespace std;

int N, K;
int kit[8];
int ans = 0;


void solve(int M, int cand)
{
    // 종료 조건
    if (cand == (1<<N)-1)
    {
        ans++;
        return;
    }

    // 미사용시 근손실
    int nextM = M-K;

    // 키트 순회
    for (int i=0; i<N; i++)
    {
        // 키트 사용한 적 있으면 패스
        if (cand & (1 << i)) continue;
        // 사용한 적 없고 500이상 유지되면 kit[i] 사용해보기
        if (nextM+kit[i] >= 500) solve(nextM+kit[i], cand | (1 << i));
    }
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    //구현
    cin >> N >> K;

    for (int i=0; i<N; i++)
    {
        cin >> kit[i];
    }

    solve(500, 0);

    cout << ans;

    return 0;
}