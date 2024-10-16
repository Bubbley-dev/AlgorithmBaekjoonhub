function solution(n, control) {
    let answer = 0;
    for (const t of control){
        switch (t) {
            case 'w':
                n += 1;
                break;
            case 's':
                n -= 1;
                break;
            case 'd':
                n += 10;
                break;
            case 'a':
                n -= 10;
                break;
        }
    }
    answer = n;
    return answer;
}