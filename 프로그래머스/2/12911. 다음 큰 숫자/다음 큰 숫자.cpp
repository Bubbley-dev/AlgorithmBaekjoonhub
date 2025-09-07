#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string toBinary(int n)
{
    string str = "";
    while(n>1)
    {
        str = (n%2 ? "1" : "0") + str;
        n/=2;
    }
    return "1" + str;
}

int solution(int n) {
    // 2진수 변환
    string b = toBinary(n);
    int cnt = count(b.begin(), b.end(), '1');
    
    string t;
    while (true)
    {
        t = toBinary(++n);
        if (cnt == count(t.begin(), t.end(), '1')) return n;
    }
    
    return 0;
}