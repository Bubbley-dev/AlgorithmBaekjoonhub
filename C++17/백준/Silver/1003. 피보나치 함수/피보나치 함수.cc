#include <iostream>

using namespace std;

int fibo[41];

int fibonacci(int n) {
    if (!n) return 0;
    else if (n == 1) return 1;
    else if (fibo[n]) return fibo[n];
    else {
        fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return fibo[n];
    }
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, i, n;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> n;
        if (n == 0) cout << 1 << " " << 0 << "\n";
        else cout << fibonacci(n-1) << " " << fibonacci(n) << "\n";
    }

    return 0;
}