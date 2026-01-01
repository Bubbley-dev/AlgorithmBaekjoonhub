#include <bits/stdc++.h>
using namespace std;

void push(list<int>& q, int n)
{
    q.push_back(n);
}

void pop(list<int>& q)
{
    if (q.empty() || q.size() == 0)
    {
        cout << -1 << "\n";
        return;
    }
    cout << q.front() << "\n";
    q.pop_front();
}

void size(list<int>& q)
{
    cout << q.size() << "\n";
}

void empty(list<int>& q)
{
    if (q.empty() || q.size() == 0)
    {
        cout << 1 << "\n";
        return;
    }
    cout << 0 << "\n";
}

void front(list<int>& q)
{
    if (q.empty() || q.size() == 0)
    {
        cout << -1 << "\n";
        return;
    }
    cout << q.front() << "\n";
}

void back(list<int>& q)
{
    if (q.empty() || q.size() == 0)
    {
        cout << -1 << "\n";
        return;
    }
    cout << q.back() << "\n";
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    //구현
    int N, i, n;
    cin >> N;

    list<int> q;
    string command;

    for (i = 0; i < N; i++)
    {
        cin >> command;
        if (command == "push")
        {
            cin >> n;
            push(q, n);
        }
        else if (command == "pop")
        {
            pop(q);
        }
        else if (command == "size")
        {
            size(q);
        }
        else if (command == "empty")
        {
            empty(q);
        }
        else if (command == "front")
        {
            front(q);
        }
        else if (command == "back")
        {
            back(q);
        }
    }

    return 0;
}