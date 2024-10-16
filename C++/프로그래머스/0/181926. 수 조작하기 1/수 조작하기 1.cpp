#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    int t;

    for (int i=0; i<control.length(); i++){
        t = control[i];
        switch (t) {
            case 'w':
                n += 1;
                break;
            case 's':
                n -= 1;
                break;
            case 'd':
                n += 10;
                break;
            case 'a':
                n -= 10;
                break;
        }
    }
    answer = n;
    
    return answer;
}