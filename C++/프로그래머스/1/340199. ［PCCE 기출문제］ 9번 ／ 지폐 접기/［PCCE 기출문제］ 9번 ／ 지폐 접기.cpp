#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    // 항상 [0]이 [1]보다 작을 것
    if (wallet[0] > wallet[1])
    {
        int t = wallet[0];
        wallet[0] = wallet[1];
        wallet[1] = t;
    }
    
    if (bill[0] > bill[1])
    {
        int t = bill[0];
        bill[0] = bill[1];
        bill[1] = t;
    }
    
    while (bill[0] > wallet[0] || bill[1] > wallet[1])
    {
        // 긴 쪽을 반으로 접는다
        bill[1] /= 2;
        
        // 긴 쪽이 [1]이 되도록 확인한다
        if (bill[0] > bill[1])
        {
            int t = bill[0];
            bill[0] = bill[1];
            bill[1] = t;
        }
        
        answer++;
    }
    
    return answer;
}