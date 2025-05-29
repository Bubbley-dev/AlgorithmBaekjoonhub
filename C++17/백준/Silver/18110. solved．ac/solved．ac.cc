#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // 구현
    int N; // 의견의 개수
    cin >> N;

    if (N == 0)
    {
        cout << 0;
        return 0;
    }

    int n; // 임시 숫자

    vector<int> arr(N);  // 각 의견 리스트
    for (int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    // 15% 계산
    int cutCount = round(N * 0.15);
    // cout << "cut : " << cutCount << "\n";
    
    int sum = 0;
    int count = 0;
    vector<int>::iterator it;
    for (it = arr.begin() + cutCount; it != arr.end() - cutCount; it++)
    {
        // cout << "it : " << *it << "\n";
        sum += *it;
        count ++;
    }

    int avg = round(sum / floor(N - 2*cutCount));
    cout << avg;

    return 0;
}