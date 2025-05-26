#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int N, M;
    cin >> N >> M;

    int** array1 = new int*[N];
    for (int i = 0; i < N; i++)
    {
        array1[i] = new int[M];
        fill_n(array1[i], M, 0);
        for (int j = 0; j < M; j++)
        {
            cin >> array1[i][j];
        }
    }

    int** array2 = new int*[N];
    for (int i = 0; i < N; i++)
    {
        array2[i] = new int[M];
        fill_n(array2[i], M, 0);
        for (int j = 0; j < M; j++)
        {
            cin >> array2[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << array1[i][j] + array2[i][j];
            if (j+1 != M) cout << " ";
            else cout << "\n";
        }
    }

    return 0;
}