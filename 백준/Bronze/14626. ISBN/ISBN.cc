#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    string isbn;
    int i, t, checki;
    int sum = 0;
    cin >> isbn;
    for (i=0; i<12; i++)
    {
        if (isbn[i] == '*') {checki = i+1; continue;}
        else if ((i+1)%2) t = isbn[i] - char('0');
        else t = (isbn[i] - char('0')) * 3;
        sum += t;
    }
    
    int check = isbn[12] - char('0');
    for (i=0; i<10; i++)
    {
        if (checki%2) t = i;
        else t = i * 3;

        if (check + ((sum+t) % 10) == 10 || check + ((sum+t) % 10) == 0)
        {
            cout << i; 
            return 0;
        }
    }

    return 0;
}