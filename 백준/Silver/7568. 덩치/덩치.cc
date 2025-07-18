#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N;
    cin >> N;
    vector<pair<int, int>> big(N);

    int a, b;
    for (int i=0; i<N; i++)
    {
        cin >> a >> b;
        big[i] = make_pair(a, b);

    }

    vector<int> levels(N);
    int lev;
    for (int i=0; i<N; i++)
    {
        lev = 1;
        for (int j=0; j<N; j++)
        {
            if (i==j) continue;
            if (big[i].first < big[j].first && big[i].second < big[j].second)
            {
                lev++;
            }
        }
        levels[i] = lev;
    }

    for (auto& i : levels)
    {
        cout << i << " ";
    }
    return 0;
}