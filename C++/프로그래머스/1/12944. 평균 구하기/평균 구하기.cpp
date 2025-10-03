#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0, cnt = 0;
    
    for (int i : arr)
    {
        cnt++;
        sum += (double) i;
    }
    
    return sum / cnt;
}