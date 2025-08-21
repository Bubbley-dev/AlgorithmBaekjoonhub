#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    vector<int> temp;
    
    for(vector<int> command : commands)
    {
        temp.clear();
        int s=command[0], e=command[1], n=command[2];

        for(int i=s-1; i<e; i++)
        {
            temp.push_back(array[i]);
        }
        
        sort(temp.begin(), temp.end());
        
        answer.push_back(temp[n-1]);
    }
    
    return answer;
}