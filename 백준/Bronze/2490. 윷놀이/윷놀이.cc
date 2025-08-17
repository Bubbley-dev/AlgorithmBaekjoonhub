#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int yut[4];
    for(int t = 0; t < 3; t++)
    {
        int count = 0;
        for(int i = 0; i < 4; i++)
        {
            cin >> yut[i];
            if(yut[i] == 1) count++;
        }
        if(count == 0) cout << "D" << endl;
        else if(count == 1) cout << "C" << endl;
        else if(count == 2) cout << "B" << endl;
        else if(count == 3) cout << "A" << endl;
        else if(count == 4) cout << "E" << endl;
    }

    return 0;
}