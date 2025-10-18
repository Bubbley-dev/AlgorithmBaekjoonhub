#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    bool ans = true;
    int i1=0, i2=0, g=0;
    while (g < goal.size())
    {
        if (goal[g] == cards1[i1]) i1++;
        else if (goal[g] == cards2[i2]) i2++;
        else {
            ans = false;
            break;
        }
        g++;
    }
    return ans ? "Yes" : "No";
}