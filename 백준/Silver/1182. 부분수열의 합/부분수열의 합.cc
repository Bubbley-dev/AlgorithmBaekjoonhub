#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, T, cnt = 0;
vector<int> arr;

void solve(int check, int sum, int selectedCnt)
{
    // check번째 원소를 쓸지 말지 결정, sum = check-1번째까지 선택한 경우 합
    if (check == N)
    {
        if (sum == T && selectedCnt > 0)
        {
            cnt++;
        }
        return;
    }

    // 선택해보기
    solve(check+1, sum+arr[check], selectedCnt+1);
    // 선택하지 않기
    solve(check+1, sum, selectedCnt);
    return;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    cin >> N >> T;
    arr.assign(N, 0);
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    solve(0, 0, 0);

    cout << cnt;

    return 0;
}