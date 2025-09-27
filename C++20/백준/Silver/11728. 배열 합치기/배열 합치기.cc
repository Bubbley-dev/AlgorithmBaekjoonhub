#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int a, b;
    cin >> a >> b;
    int n = a+b;

    vector<int> arrA(a);
    vector<int> arrB(b);
    vector<int> arr(n);

    for (int i=0; i<a; i++)
    {
        cin >> arrA[i];
    }
    for (int i=0; i<b; i++)
    {
        cin >> arrB[i];
    }

    auto itA = arrA.begin();
    auto itB = arrB.begin();

    int i = 0;
    while (i<n)
    {
        // i번째 원소는 *itA, *itB 중 작은 것
        // 단, 한쪽 원소를 다 썼다면 나머지는 남은쪽

        if (itB == arrB.end())
        {
            arr[i] = *itA;
            itA++;
        } else if (itA == arrA.end())
        {
            arr[i] = *itB;
            itB++;
        } else if (*itA <= *itB)
        {
            arr[i] = *itA;
            itA++;
        } else
        {
            arr[i] = *itB;
            itB++;

        }

        i++;
    }

    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}