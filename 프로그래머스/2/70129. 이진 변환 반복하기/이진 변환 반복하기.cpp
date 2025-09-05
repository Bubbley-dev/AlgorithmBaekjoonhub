#include <string>
#include <vector>
#include <iostream>

using namespace std;

string toBinary(int n)
{
    string str = "";
    while (n > 1)
    {
        str = (n % 2 ? "1" : "0") + str;  // 나머지가 앞에 붙음
        n /= 2;
    }
    return "1" + str;  // 마지막 몫 1 붙을 것
}

vector<int> solution(string s) {
    int cntChange = 0, cntZero = 0;
    int len=0, cntTemp=0;  // 이진변환용 글자 수 저장, 0 갯수 저장
    while (s != "1")
    {
        // 0 제거
        for (char c : s)
        {
            if (c=='0') cntTemp++;
        }
        len = s.length() - cntTemp;  // 전체 길이에서 0을 제외한 값
        cntZero += cntTemp;
        cntTemp = 0;
        
        // len -> 2진수로 변환
        s = toBinary(len);
        cntChange++;
    }
    
    vector<int> answer = {cntChange, cntZero};  
    return answer; // 변환 횟수, 제거된 0의 갯수
}