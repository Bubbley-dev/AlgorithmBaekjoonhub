#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, i;
    cin >> N;

    vector<long long> ls(N);
    for (i=0; i<N; i++)
    {
        cin >> ls[i];
    }

    sort(ls.begin(), ls.end());

    vector<long long> times(N);
    long long sum = 0;
    for (i=0; i<N; i++)
    {
        times[i] = i == 0 ? ls[i] : times[i-1] + ls[i];
        sum += times[i];
    }

    cout << sum;

    return 0;
}