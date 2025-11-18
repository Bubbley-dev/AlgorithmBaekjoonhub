using System;

public class Solution {
    public int[] solution(long n) {
        string s = n.ToString();
        int[] answer = new int[s.Length];
        
        int i = 0;
        while (n>0) {
            answer[i++] = (int)(n % (long)10);
            n /= 10;
        }
        
        return answer;
    }
}