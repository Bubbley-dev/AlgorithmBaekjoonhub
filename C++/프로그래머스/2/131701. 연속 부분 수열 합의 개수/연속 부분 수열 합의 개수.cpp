#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int n = elements.size();
    set<int> s;
    vector<vector<int>> DP(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++)
    {
        DP[0][i] = elements[i];
        s.insert(DP[0][i]);
    }

    for(int i = 1; i < n; ++i)
    {
        for(int j = 0, k = i; j < n; ++j, k = (k == n - 1) ? 0 : ++k)
        {
            DP[i][j] = DP[i-1][j] + DP[0][k];
            s.insert(DP[i][j]);
        }
    }

    return s.size();
}