using System;

public class Solution {
    public int solution(string[] babbling) {
        int answer = 0;
        
        foreach(string s in babbling)
        {
            int i=0;
            while(i<s.Length)
            {
                if(s[i] == 'a')
                {
                    if(i+3 <= s.Length && s.Substring(i, 3) == "aya")
                    {
                        i+=3;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(s[i] == 'y')
                {
                    if(i+2 <= s.Length && s.Substring(i, 2) == "ye")
                    {
                        i+=2;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(s[i] == 'w')
                {
                    if(i+3 <= s.Length && s.Substring(i, 3) == "woo")
                    {
                        i+=3;
                    }
                    else
                    {
                        break;
                    }
                }
                else if(s[i] == 'm')
                {
                    if(i+2 <= s.Length && s.Substring(i, 2) == "ma")
                    {
                        i+=2;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            if(i == s.Length)
            {
                answer++;
            }
        }
        
        return answer;
    }
}