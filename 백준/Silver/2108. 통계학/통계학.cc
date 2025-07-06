#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <numeric>

using namespace std;

static bool comp(pair<char, int>& a, pair<char, int>& b){return a.second > b.second;}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N;
    cin >> N;
    vector<int> nums(N, 0);
    map<int, int> count;

    for (int i=0; i<N; i++)
    {
        cin >> nums[i];
        count[nums[i]]++;
    }

    // 산술평균
    float sum = accumulate(nums.begin(), nums.end(), 0);
    float avg = sum / N;
    int a = round(avg);
    cout << ((a == -0) ? 0 : a) << "\n";

    // 중앙값
    sort(nums.begin(), nums.end());
    cout << nums[N/2] << "\n";
    
    // 최빈값
    vector<int> most(1, 0);
    int c = 0;
    for (auto& p : count)
    {
        if (p.second > c)
        {
            most.clear();
            most.push_back(p.first);
            c = p.second;
        }
        else if (p.second == c)
        {
            most.push_back(p.first);
        }
    }
    sort(most.begin(), most.end());
    int m;
    if (most.size() > 1) m = most[1];
    else m = most[0];
    cout << m << "\n";

    // 범위
    cout << nums[N-1] - nums[0];

    return 0;
}