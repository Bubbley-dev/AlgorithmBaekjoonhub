#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long seat[1025][1025];
int N;
vector<int> table;

long long pick(int r, int c, int n)
{
    if (n == 1) return seat[r][c];

    long long rec[4];
    rec[0] = pick(r, c, n / 2);
    rec[1] = pick(r, c + (n / 2), n / 2);
    rec[2] = pick(r + (n / 2), c, n / 2);
    rec[3] = pick(r + (n / 2), c + (n / 2), n / 2);
    sort(rec, rec+4);
    return rec[1];
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    //구현
    int i, j;
    cin >> N;
    for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cin >> seat[i][j];
		}
	}

    long long res = pick(0, 0, N);

    cout << res;

    return 0;
}