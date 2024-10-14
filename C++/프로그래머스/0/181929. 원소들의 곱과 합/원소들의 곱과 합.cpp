#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int result1 = 1;
    int result2 = 0;
    for (int i=0; i < num_list.size(); i++){
        result1 *= num_list[i];
        result2 += num_list[i];
    }
    if (result2*result2 > result1) {
        answer = 1;
    }
    return answer;
}