#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    int T;
    cin >> T;

    for (int t=0; t<T; t++)
    {
        string cmd;
        cin >> cmd;
        int N;
        cin >> N;

        // 배열 파싱
        int isReversed = 0;
        int isErrored = 0;
        deque<int> dq;
        string line;
        string tempS = "";
        int tempN;
        getline(cin, line, ']');

        for(auto& c : line)
        {
            switch(c)
            {
                case '\n':
                case '[':
                    break;
                case ',':
                    tempN = stoi(tempS);
                    dq.push_back(tempN);
                    tempS = "";
                    break;
                default:
                    tempS += c;
                    break;
            }
        }
            
        // 남은 숫자도 넣기
        if (tempS != "")
        {
            tempN = stoi(tempS);
            dq.push_back(tempN);
        }

        for(auto& c : cmd)
        {
            if (isErrored) break;
            switch(c)
            {
                case 'R':
                    isReversed = !isReversed;
                    break;
                case 'D':
                    if (dq.empty()) isErrored = 1;
                    else if (isReversed) dq.pop_back();
                    else dq.pop_front();
                    break;
            }
        }

        if (isErrored)
        {
            cout << "error" << "\n";
            continue;
        }
        if (isReversed)
        {
            reverse(dq.begin(), dq.end());
        }
        cout << "[";
        for (auto it = dq.begin(); it != dq.end(); it++)
        {
            cout << *it;
            if (it != dq.end()-1) cout << ",";
        }
        cout << "]" << "\n";
    }

    return 0;
}