#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    string str;
    cin >> str;
    bitset<100000> A(str);
    cin >> str;
    bitset<100000> B(str);

    
    // and
    bitset<100000> result = A & B;
    cout << result << "\n";
    
    // or
    result = A | B;
    cout << result << "\n";
    
    // nor
    result = A ^ B;
    cout << result << "\n";
    
    result = A.flip();
    cout << result << "\n";
    
    result = B.flip();
    cout << result << "\n";

    return 0;
}