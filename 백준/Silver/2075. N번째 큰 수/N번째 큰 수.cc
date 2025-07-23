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
    int N;
    cin >> N;
    vector<int> arr(N*N, 0);

    for (int i=0; i<N*N; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    cout << arr[N-1];

    return 0;
}