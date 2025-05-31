#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N;
    cin >> N;

    vector<vector<int>> ls;
    vector<int> temp(2);

    for (int i = 0; i<N; i++)
    {
        cin >> temp[0] >> temp[1];
        ls.push_back(temp);
    }

    // 정렬
    sort(ls.begin(), ls.end());
    
    // 출력
    for (int i=0; i<N; i++)
    {
        cout << ls[i][0] << " " << ls[i][1] << "\n";
    }

    return 0;
}