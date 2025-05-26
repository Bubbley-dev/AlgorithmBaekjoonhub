#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    cout << fixed;
    cout.precision(1);

    //구현
    string v;
    cin >> v;

    if (v == "F")
    {
        cout << 0.0;
        return 0;
    }

    float r = 0.0;

    switch (v[0])
    {
    case 'A':
        r = 4.0;
        break;

    case 'B':
        r = 3.0;
        break;
    
    case 'C':
        r = 2.0;
        break;
    
    case 'D':
        r = 1.0;
    
    default:
        break;
    }

    switch (v[1])
    {
    case '+':
        r += 0.3;
        break;
    
    case '-':
        r -= 0.3;
        break;
    
    default:
        break;
    }

    cout << r;

    return 0;
}