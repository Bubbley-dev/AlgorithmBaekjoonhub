#include <string>
#include <vector>

using namespace std;

long long dp(vector<long long>& arr, int n)
{
    if (arr[n]) return arr[n];
    
    // arr[n-1]에서 1칸 더 뛰거나, arr[n-2]에서 2칸 더 뛰거나
    arr[n] = (dp(arr, n-1) + dp(arr, n-2)) % 1234567;
    return arr[n];
}


long long solution(int n) {
    vector<long long> arr(n+1, 0);
    
    arr[1] = 1;
    arr[2] = 2;
    
    dp(arr, n);
    
    return arr[n];
}