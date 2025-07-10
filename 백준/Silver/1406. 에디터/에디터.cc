#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    //구현
    string line;
    int N, M;
    getline(cin, line, '\n');
    cin >> M;

    // 문장 리스트화
    N = line.length();
    list<char> lst;
    for(auto& c : line)
    {
        lst.push_back(c);
    }

    // 커서 설정 -> 문장의 맨 뒤 (end의 앞)
    list<char> :: iterator cur = lst.end();

    // 명령 수행
    char com, c;
    for (int i=0; i<M; i++)
    {
        cin >> com;
        switch (com)
        {
        case 'L':
            if (cur != lst.begin()) cur--;
            break;

        case 'D':
            if (cur != lst.end()) cur++;
            break;

        case 'B':
            // 커서의 앞 글자를 지워야 함

            if (cur != lst.begin()) 
            {
                cur--;
                cur = lst.erase(cur);
            }
            break;

        case 'P':
            cin >> c;
            lst.insert(cur, c);
            break;
        }
    }

    for (auto& c : lst)
    {
        cout << c;
    }

    return 0;
}