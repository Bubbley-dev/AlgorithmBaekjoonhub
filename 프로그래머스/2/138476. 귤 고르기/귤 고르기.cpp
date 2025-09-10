#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    // 사이즈별로 몇 개 있는지 체크
    map<int, int> sizes;
    for (int t : tangerine)
    {
        sizes[t]++;
    }
    
    // vector로 전환
    vector<pair<int, int>> sv;
    for (auto& p : sizes)
    {
        sv.push_back(p);
    }
    
    sort(sv.begin(), sv.end(), [](pair<int, int>& a, pair<int, int>& b) { return a.second > b.second; });
    
    int n = 0;
    while (n < k)
    {
        n += sv[answer].second;
        answer++;
    }
    
    return answer;
}