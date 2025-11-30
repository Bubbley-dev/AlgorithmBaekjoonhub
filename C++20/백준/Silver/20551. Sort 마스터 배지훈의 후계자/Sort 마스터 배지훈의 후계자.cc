#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int q, ans;
    while (m--)
    {
        cin >> q;
       
        int left = 0, right = arr.size() - 1, ans = -1;  // 값이 없으면 -1

        // 이분탐색
		while (left <= right) {
			int mid = (left + right) / 2;  // 중간 지점

			if (arr[mid] >= q) 
			{   // 중앙값이 찾으려는 값보다 크면 왼쪽 탐색
				if (arr[mid] == q) ans = mid;  // 같으면 저장
				right = mid - 1;  // 먼저 나온 인덱스가 있을 수도 있으니까 앞쪽 더 탐색
			}
			else left = mid + 1;  // 없으면 오른쪽 탐색
		}
       
        cout << ans << "\n";
    }

    return 0;
}