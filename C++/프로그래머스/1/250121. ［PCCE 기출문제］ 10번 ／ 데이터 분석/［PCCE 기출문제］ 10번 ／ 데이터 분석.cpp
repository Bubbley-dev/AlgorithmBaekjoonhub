#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) 
{
    vector<vector<int>> answer;
    int sort_index;
    int ext_index;
    
    if (ext == "code") { ext_index = 0; }
    else if (ext == "date") { ext_index = 1; }
    else if (ext == "maximum") { ext_index = 2; }
    else if (ext == "remain") { ext_index = 3; }
    
    if (sort_by == "code") { sort_index = 0; }
    else if (sort_by == "date") { sort_index = 1; }
    else if (sort_by == "maximum") { sort_index = 2; }
    else if (sort_by == "remain") { sort_index = 3; }
    
    // 기준값에 따라 정렬
    sort(data.begin(), data.end(), [&](vector<int> v1, vector<int> v2) 
         {
            return v1[sort_index] < v2[sort_index];
        }
    );
    
    for (auto& v : data)
    {
        if (v[ext_index] < val_ext)
        {
            answer.push_back(v);
        }
    }
    
    return answer;
}