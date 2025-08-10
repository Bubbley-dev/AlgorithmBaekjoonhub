using System;

public class Solution
{
    private bool isValid(int r, int c, int n)
    {
        return (0 <= r && r < n && 0 <= c && c < n);
    }

    public int[,] solution(int n)
    {
        int[,] answer = new int[n, n];
        int r = 0, c = 0, num = 1;

        // 시계방향 나선형: 오른쪽, 아래, 왼쪽, 위
        int[,] directions = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
        int d = 0;

        while (num <= n * n)
        {
            answer[r, c] = num++;

            // 다음 위치 계산
            int nr = r + directions[d, 0];
            int nc = c + directions[d, 1];

            // 경계를 벗어나거나 이미 채워진 위치인 경우 방향 전환
            if (!isValid(nr, nc, n) || answer[nr, nc] != 0)
            {
                d = (d + 1) % 4;
                r = r + directions[d, 0];
                c = c + directions[d, 1];
            }
            else
            {
                r = nr;
                c = nc;
            }
        }

        return answer;
    }
}