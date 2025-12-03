#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int T;
    vector<int> cards(10);
    cin >> T;
    list<int> ans;
    while(T--)
    {
        int n=0;
        for (int i=1; i<=9; i++)
        {
            cin >> cards[i];
            n += cards[i];
        }
        cards[9] += cards[6];
        cards[6] = 0;  // 무조건 9로 써야 커짐
        
        int i=1;
        bool flag = n%2==1;  // 홀수면 true => front
        ans.clear();
        while (i<10)
        {
            if (cards[i]-- > 0)
            {
                if (flag) ans.push_front(i);
                else ans.push_back(i);
                
                flag = !flag;
            }
            else i++;
        }
        
        for (auto it=ans.begin(); it!=ans.end(); it++)
        {
            cout << *it << " ";
        }
        cout << "\n";
        
    }
    
    return 0;
}