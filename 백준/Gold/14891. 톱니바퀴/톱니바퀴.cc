#include <iostream>
#include <vector>
#include <string>

using namespace std;

int pow(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    vector<string> array(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> array[i];
    }

    int K;  // 회전 횟수
    cin >> K;

    vector<int> direction(4);  // 회전 방향(1: 시계, -1: 반시계)
    int num, dir; // 톱니번호, 회전 방향(1: 시계, -1: 반시계)

    for (int i = 0; i < K; i++)
    {
        direction.assign(4, 0);
        // 연결부 : 같은 극이면 회전하지 않음, 다른 극이면 반대 방향으로 회전
        // array[0][2] - array[1][6]
        // array[1][2] - array[2][6]
        // array[2][2] - array[3][6]

        // 회전
        cin >> num >> dir;
        num--;
        direction[num] = dir;

        // 왼쪽으로 연쇄 회전 확인
        for (int left = num - 1; left >= 0; left--)
        {
            if (array[left][2] != array[left + 1][6])
            {
                direction[left] = -direction[left + 1];
            }
            else
            {
                break; // 더 이상 연쇄 회전하지 않음
            }
        }

        // 오른쪽으로 연쇄 회전 확인
        for (int right = num + 1; right < 4; right++)
        {
            if (array[right][6] != array[right - 1][2])
            {
                direction[right] = -direction[right - 1];
            }
            else
            {
                break; // 더 이상 연쇄 회전하지 않음
            }
        }

        // 회전
        for (int n = 0; n < 4; n++)
        {
            if (direction[n] == 1)
            {
                array[n] = array[n][7] + array[n].substr(0, 7);
            }
            else if (direction[n] == -1)
            {
                array[n] = array[n].substr(1) + array[n][0];
            }
        }
    }

    int score = 0;
    for (int n = 0; n < 4; n++)
    {
        if (array[n][0] == '1') score += pow(2, n);
    }

    cout << score;

    return 0;
}