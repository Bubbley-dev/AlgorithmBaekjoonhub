#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int N = 0;
struct
{
    bool operator()(string a, string b) const {
        if (a[N] != b[N]) return a[N] < b[N];
        return a < b;
    }
}
comp;

vector<string> solution(vector<string> strings, int n) {
    N = n;
    
    sort(strings.begin(), strings.end(), comp);
    
    return strings;
}