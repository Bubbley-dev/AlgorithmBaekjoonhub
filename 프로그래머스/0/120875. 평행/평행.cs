using System;

public class Solution
{
    // 두 점을 잇는 직선의 기울기를 계산하는 함수
    private double GetSlope(int x1, int y1, int x2, int y2)
    {
        return (double)(y2 - y1) / (x2 - x1);
    }

    public int solution(int[,] dots)
    {
        // 경우의 수 : [0,1 / 2,3], [0,2 / 1,3], [0,3 / 1,2]
        if(GetSlope(dots[0,0], dots[0,1], dots[1,0], dots[1,1]) == GetSlope(dots[2,0], dots[2,1], dots[3,0], dots[3,1]))
        {
            return 1;
        }
        if(GetSlope(dots[0,0], dots[0,1], dots[2,0], dots[2,1]) == GetSlope(dots[1,0], dots[1,1], dots[3,0], dots[3,1]))
        {
            return 1;
        }
        if(GetSlope(dots[0,0], dots[0,1], dots[3,0], dots[3,1]) == GetSlope(dots[1,0], dots[1,1], dots[2,0], dots[2,1]))
        {
            return 1;
        }

        return 0;
    }
}