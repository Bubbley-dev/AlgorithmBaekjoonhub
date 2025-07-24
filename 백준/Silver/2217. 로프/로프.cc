#include <iostream>
#include <algorithm>
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
    vector<int> arr(N);
    for (int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int maxWeight = 0;
    for (int i=0; i<N; i++)
    {
        // 로프 무게(arr[i]) * (N-i)개 만큼 견딜 수 있다.
        maxWeight = max(maxWeight, arr[i] * (N-i));
    }

    cout << maxWeight;
    return 0;
}