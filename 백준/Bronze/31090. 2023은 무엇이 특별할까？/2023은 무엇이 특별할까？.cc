#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);


    //구현
    int t, T, N;
    cin >> T;
    for (t=0; t < T; t++)
    {
        cin >> N;
    
        int l = N % 100;
        if ((N+1) % l == 0) cout << "Good\n";
        else cout << "Bye\n";
    }

    return 0;
}