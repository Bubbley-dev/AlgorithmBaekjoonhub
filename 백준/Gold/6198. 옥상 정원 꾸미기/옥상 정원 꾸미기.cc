#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N;
    cin >> N;

    vector<unsigned long long> arr(N);
    for (int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    unsigned long long ans = 0;
    vector<int> view(N, 0);  // i번째 빌딩에서 볼 수 있는 빌딩의 수
    for (int i=N-2; i>=0; i--)
    {
        int j = i+1;
        while (j < N)
        {
            if (arr[j] >= arr[i]) break;

            view[i] += view[j] + 1;  // j가 i보다 낮으므로, j가 볼 수 있는 빌딩은 모두 볼 수 있고, j까지 볼 수 있다.
            j += view[j] + 1;  // j가 볼 수 없었던 빌딩부터 확인하면 된다.
        }
        ans += view[i];
    }

    cout << ans;

    return 0;
}