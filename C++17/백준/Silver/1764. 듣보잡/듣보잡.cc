#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, M, i, flag;
    cin >> N >> M;

    string temp;
    set<string> ls;
    vector<string> result;

    for (i = 0; i < N+M; i++)
    {
        flag = 0;
        cin >> temp;
        
        if (ls.find(temp) != ls.end())
        {
            result.push_back(temp);
        }
        else
        {
            ls.emplace(temp);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << "\n";
    for (auto& name : result)
    {
        cout << name << "\n";
    }

    return 0;
}