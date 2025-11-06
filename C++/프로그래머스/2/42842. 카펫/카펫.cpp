#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2);
    
    int row = yellow+2, col = 3, b, y;
    // 가로길이 최대값 yellow+2(한줄인경우) / 최소값 sqrt(yellow)
    while (row >= sqrt(yellow))
    {
        // row * col 인 경우 실제 b와 y의 타일 갯수 추측
        y = (row-2) * (col-2);
        b = (row * col) - y;
        
        if (y == yellow && b == brown)  // 정답인 경우
        {
            answer = { row, col };
            break;
        }
        else if (row * col > brown+yellow)
        {
            row--;
        }
        else if (row * col < brown+yellow)
        {
            col++;
        }
        else
        {
            row--;
            col++;
        }
    }
    
    return answer;
}