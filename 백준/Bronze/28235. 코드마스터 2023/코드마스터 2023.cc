#include <iostream>
using namespace std;
int main()
{
    char s[10];
    cin >> s;
    switch (s[0])
    {
        case 'S':
            cout << "HIGHSCHOOL";
            break;
        case 'C':
            cout << "MASTER";
            break;
        case '2':
            cout << "0611";
            break;
        case 'A':
            cout << "CONTEST";
            break;
    }
    return 0;
}