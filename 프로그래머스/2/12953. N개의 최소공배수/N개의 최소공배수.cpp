#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void findPrime(vector<int>& primes, int n)
{
    vector<int> isPrime(n+1, 1);
    
    for(int i=2; i<= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j=i*2; j<=n; j+=i)
            {
                isPrime[j] = 0;
            }
        }
    }
}

int solution(vector<int> arr) {
    vector<int> primes;
    vector<int> results;
    
    findPrime(primes, 100);
    sort(arr.begin(), arr.end());
    
    while(true)
    {
        bool b = true;
        
        for (int i=0; i<primes.size(); i++)
        {
            bool bb = false;
            int cnt = 0;
            for (int j=0; j<arr.size(); j++)
            {
                if (arr[j] % primes[i] == 0)
                {
                    cnt++;
                }
            }
            
            if (cnt >= 2)
            {
                bb = true;
                b = false;
                for (int j=0; j<arr.size(); j++)
                {
                    if (arr[j] % primes[i] == 0)
                    {
                        arr[j] /= primes[i];
                    }
                }
            }
            
            if (bb)
            {
                results.push_back(primes[i]);
                break;
            }
        }
        if (b) break;
    }
    
    int answer = 1;
    for (int i=0; i<results.size(); i++)
    {
        answer *= results[i];
    }
    for (int i=0; i<arr.size(); i++)
    {
        answer *= arr[i];
    }
    
    return answer;
}