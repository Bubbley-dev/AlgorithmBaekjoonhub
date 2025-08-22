#include <vector>
#include <map>
using namespace std;

int solution(vector<int> nums)
{
    map<int, int> monster;
    // 순회하면서 종류별 마리 수 체크;
    for(int n : nums)
    {
        monster[n]++;
    }
    
    // 종류가 최대 가져갈 수 있는 마리수보다 많으면 최대로 가져갈 수 있고, 아니면 종류 수만큼
    int answer = monster.size() >= nums.size() / 2 ? nums.size() / 2 : monster.size();
    
    return answer;
}