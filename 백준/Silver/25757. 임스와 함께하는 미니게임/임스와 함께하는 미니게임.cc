#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    // Y 2 F 3 O 4
    int N, i;
    char G;
    string temp;
    cin >> N >> G;

    map<string, int> m;

    for (i=0; i<N; i++)
    {
        cin >> temp;
        m[temp]++;
    }

    switch(G)
    {
        case 'Y':
            cout << m.size();
            break;
        case 'F':
            cout << m.size()/2;
            break;
        case 'O':
            cout << m.size()/3;
            break;
    }

    return 0;
}