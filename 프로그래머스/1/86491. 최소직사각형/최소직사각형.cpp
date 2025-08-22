#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int r=0, c=0;
    
    // 명함 사이즈 순회하며 가로, 세로 최대 길이 측정
    // 단, 항상 가로가 세로보다 길도록 측정
    
    for(vector<int> size : sizes)
    {
        // 둘 중 긴 것을 가로로 지정
        int row = size[0] >= size[1] ? size[0] : size[1];
        int col = size[0] >= size[1] ? size[1] : size[0];
        
        r = row >= r ? row : r;
        c = col >= c ? col : c;
    }
    
    int answer = r*c;
    
    return answer;
}