#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    string input = "";
    map<char, int> code = {
        {'-', 0},
        {'\\', 1},
        {'(', 2},
        {'@', 3},
        {'?', 4},
        {'>', 5},
        {'&', 6},
        {'%', 7},
        {'/', -1}
    };
    int number;

    while(input != "#")
    {
        getline(cin, input);
        if(input == "#")
            return 0;
        number = 0;
        for(int i=0; i<input.size(); i++)
        {
            number += code[input[i]] * pow(8, input.size()-i-1);
        }
        cout << number << "\n";
    }

    return 0;
}