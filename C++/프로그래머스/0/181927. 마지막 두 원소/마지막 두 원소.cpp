#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int N = num_list.size();
    int num1 = num_list[N-1];
    int num2 = num_list[N-2];
    
    int t;
    
    if (num1 > num2) {
        t = num1 - num2;
    } else {
        t = num1 * 2;
    }
    
    num_list.push_back(t);
    
    return num_list;
}