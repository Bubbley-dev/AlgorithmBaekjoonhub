#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    //구현
    int N;
    cin >> N;

    // 짝수면 CY가 이길 수 밖에 없지 않나...?
    if (N%2) cout << "SK";
    else cout << "CY";

    return 0;
}