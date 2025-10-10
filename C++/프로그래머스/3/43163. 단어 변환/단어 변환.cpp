#include <string>
#include <vector>

using namespace std;

int answer = 51;
vector<int> v(50, 0);

bool isValid(string a, string b)
{
    int cnt = 0;
    for (int i=0; i<a.length(); i++)
    {
        if (a[i] != b[i]) cnt++;
        if (cnt > 1) return false;
    }
    return true;
}
void search(vector<string>&words, string word, string target, int cnt)
{
    if (word == target)
    {
        answer = answer > cnt ? cnt : answer;
        return;
    }
    
    if (cnt > answer)
    {
        return;
    }
    
    for(int i=0; i<words.size(); i++)
    {
        // 방문하지 않은 바꿀 수 있는 단어 확인
        if (!v[i] && isValid(word, words[i]))
        {
            v[i] = 1; // 방문처리
            search(words, words[i], target, cnt+1);  // 재귀
            v[i] = 0; // 방문처리 해제
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    search(words, begin, target, 0);
    
    return answer == 51 ? 0 : answer;
}