#include <iostream>
#include <vector>
#include <string>

using namespace std;

void push(vector<int>& v, int n)
{
    v.push_back(n);
}
void pop(vector<int>& v)
{
    if (v.size() == 0)
    {
        cout << -1 << "\n";
        return;
    }
    cout << v.back() << "\n";
    v.pop_back();
}
void size(vector<int>& v)
{
    cout << v.size() << "\n";
}
void emp(vector<int>& v)
{
    if (v.empty() || v.size() == 0)
    {
        cout << 1 << "\n";
        return;
    }
    cout << 0 << "\n";
}
void top(vector<int>& v)
{
    if (v.empty() || v.size() == 0)
    {
        cout << -1 << "\n";
        return;
    }
    cout << v.back() << "\n";
}
int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N;
    cin >> N;

    vector<int> stk;
    string commend;
    int temp;

    for (int i = 0; i < N; i++)
    {
        cin >> commend;
        if (commend == "push")
        {
            cin >> temp;
            push(stk, temp);
        }
        else if (commend == "pop")
        {
            pop(stk);
        }
        else if (commend == "size")
        {
            size(stk);
        }
        else if (commend == "empty")
        {
            emp(stk);
        }
        else if (commend == "top")
        {
            top(stk);
        }
    }

    return 0;
}