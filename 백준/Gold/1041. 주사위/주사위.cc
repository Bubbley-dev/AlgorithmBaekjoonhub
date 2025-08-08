#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    unsigned long long N, result=0;
    cin >> N;
    vector<int> dice(6);
    for (int i=0; i<6; i++)
    {
        cin >> dice[i];
        result += dice[i];
    }

    if (N == 1)
    {
        cout << result-*max_element(dice.begin(), dice.end());
        return 0;
    }

    // 경우의 수 하드코딩
    int one, two, three;  // 각각 1, 2, 3면의 합의 최솟값

    // 가장 작은 면
    one = *min_element(dice.begin(), dice.end());

    // 두 면의 합이 가장 작은 경우
    // 반대면이 아니면 (인덱스의 합이 5가 아니면) 후보
    set<int> twos;
    for (int i=0; i<5; i++)
    {
        for (int j=i+1; j<6; j++)
        {
            if (i+j == 5) continue;
            twos.insert(dice[i]+dice[j]);
        }
    }
    two = *min_element(twos.begin(), twos.end());

    vector<int> threes = {
        dice[0] + dice[1] + dice[2],
        dice[0] + dice[1] + dice[3],
        dice[0] + dice[4] + dice[2],
        dice[0] + dice[4] + dice[3],
        dice[5] + dice[1] + dice[2],
        dice[5] + dice[1] + dice[3],
        dice[5] + dice[4] + dice[2],
        dice[5] + dice[4] + dice[3],
    };
    three = *min_element(threes.begin(), threes.end());

    result = (three*4) + (two*((N-2)*8+4)) + (one*((N-2)*(N-2)*5 + (N-2)*4));

    cout << result;

    return 0;
}