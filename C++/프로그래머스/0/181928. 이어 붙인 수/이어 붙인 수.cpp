#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string even = "";
    string odd = "";
    
    for (int i=0; i<num_list.size(); i++){
        int num = num_list[i];
        string snum = to_string(num);
        if (num%2 == 0) {
            even += snum;
        } else {
            odd += snum;
        }
    }
    
    answer = stoi(even)+stoi(odd);
    
    
    return answer;
}