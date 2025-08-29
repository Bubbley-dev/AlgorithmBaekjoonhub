#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int n = diffs.size();
    int maxLevel = *max_element(diffs.begin(), diffs.end());
    int minLevel = 1;
    
    while (minLevel <= maxLevel)
    {
        int level = (minLevel + maxLevel) / 2;
        long long checkT = 0;
        for (int i=0; i<n; i++)
        {
            if (diffs[i] <= level) checkT += times[i];
            else checkT += (diffs[i]-level) * (times[i] + times[i-1]) + times[i];
        }
        if (checkT <= limit) maxLevel = level - 1;
        else minLevel = level + 1;
    }
    
    return minLevel;
}