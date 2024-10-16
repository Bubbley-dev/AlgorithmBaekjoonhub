#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    vector<int> query;
    
    int i, j, temp;
    
    
    for (int q=0; q<queries.size(); q++) {
        query = queries[q];
        i = query[0];
        j = query[1];
        
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        
    }

    
    return arr;
}