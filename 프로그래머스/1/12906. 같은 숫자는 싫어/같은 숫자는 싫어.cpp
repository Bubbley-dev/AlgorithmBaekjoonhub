#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer = {arr[0]};
    int last = arr[0];
    
    for (int i=1; i<arr.size(); i++)
    {
        if (arr[i] == last) continue;
        last = arr[i];
        answer.push_back(arr[i]);
    }

    return answer;
}