#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    int div = 0, n=x;
    while (n>0)
    {
        div += n%10;
        n/=10;
    }
    
    return x%div == 0;
}