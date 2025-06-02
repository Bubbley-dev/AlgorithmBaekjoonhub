#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, i, s, e;
    long k, t;
    int ans = 0;
    cin >> N;

    vector<long> v(N);
    for (i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (i = 0; i < N; i++)
    {
        s = 0;
        e = N - 1;
        k = v[i];
        while (s < e)
        {
            t = v[s] + v[e];
            if (t == k)
            {
                if (s != i && e != i)
                {
                    ans++;
                    break;
                }
                else if (s == i)
                {
                    s++;
                }
                else if (e == i)
                {
                    e--;
                }
            }
            else if (t > k)
            {
                e--;
            }
            else
            {
                s++;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}