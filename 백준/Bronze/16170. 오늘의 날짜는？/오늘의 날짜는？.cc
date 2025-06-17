#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    time_t t = time(NULL);
    struct tm *tt = localtime(&t);
    cout << tt -> tm_year + 1900 << "\n";
    cout << tt -> tm_mon + 1 << "\n";
    cout << tt -> tm_mday;

    return 0;
}