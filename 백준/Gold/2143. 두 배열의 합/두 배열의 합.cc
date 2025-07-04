#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    long long T;
    cin >> T;
    int N, M;
    cin >> N;
    vector<long long> Vn(N+1, 0);
    vector<long long> Sn(N+1, 0);
    map<long long, long long> Mn;
    for (int i=1; i<=N; i++)
    {
        cin >> Vn[i];
        Sn[i] = Sn[i-1] + Vn[i];
        for (int j=1; j<=i; j++)
        {
            // S[j]~S[i] => S[i] - S[j-1]
            Mn[Sn[i]-Sn[j-1]]++;
        }
    }
    cin >> M;
    vector<long long> Vm(M+1, 0);
    vector<long long> Sm(M+1, 0);
    map<long long, long long> Mm;
    for (int i=1; i<=M; i++)
    {
        cin >> Vm[i];
        Sm[i] = Sm[i-1] + Vm[i];
        for (int j=1; j<=i; j++)
        {
            // S[j]~S[i] => S[i] - S[j-1]
            Mm[Sm[i]-Sm[j-1]]++;
        }
    }

    long long ans = 0;

    for (auto& n:Mn)
    {
        auto it = Mm.find(T-n.first);
        if (it != Mm.end())
        {
            ans += n.second * (it->second);
        }
    }

    cout << ans;

    return 0;
}