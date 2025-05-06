#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int s = 0;
    int e = 0;
    int l = sequence.size();
    int sum = sequence[0];
    
    while (true)
    {
        if (s > e || e >= sequence.size()) break;
        if (sum == k)
        {
            if (e - s < l) answer = {s, e};
            l = e - s;
        }
        
        if (sum >= k)
        {
            sum -= sequence[s];
            s++;
        }
        else if (sum < k)
        {
            e++;
            sum += sequence[e];
        }
    }

    return answer;
}