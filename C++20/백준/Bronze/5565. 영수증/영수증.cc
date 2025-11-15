#include <iostream>
using namespace std;
int main()
{
    int N, t;
    cin >> N;
    for (int i=0; i<9; i++)
    {
        cin >> t;
        N -= t;
    }
    cout << N;
    return 0;
}