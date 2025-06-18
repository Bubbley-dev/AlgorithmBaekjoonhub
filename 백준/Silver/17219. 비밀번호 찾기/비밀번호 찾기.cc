#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, M, i;
    string A, B;
    map<string, string> memo;
    map<string, string> ::iterator p;
    cin >> N >> M;

    for (i = 0; i < N; i++)
    {
        cin >> A >> B;
        memo[A] = B;
    }

    for (i = 0; i < M; i++)
    {
        cin >> A;
        p = memo.find(A);
        cout << p -> second << "\n";
    }
    return 0;
}