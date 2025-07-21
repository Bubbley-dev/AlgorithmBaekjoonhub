#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    string name;
    int age, weight;
    while(true)
    {
        cin >> name >> age >> weight;
        if (name == "#" && age + weight == 0) return 0;
        if (age > 17 || weight >= 80) cout << name << " Senior\n";
        else cout << name << " Junior\n";
    }


    return 0;
}