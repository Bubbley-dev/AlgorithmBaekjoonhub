using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while(n != 0)
    {
        answer += n%10; // 1의 자리 더하기
        n /= 10;  // 1의자리 떼기
    }
    

    return answer;
}