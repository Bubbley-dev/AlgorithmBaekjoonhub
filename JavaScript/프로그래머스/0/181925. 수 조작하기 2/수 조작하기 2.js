function solution(numLog) {
    let answer = '';
    for (let i=1; i<numLog.length; i++){
        let prev = numLog[i-1];
        let now = numLog[i];
        let inc = now - prev;
        switch (inc){
            case 1:
                answer += 'w';
                break;
            case -1:
                answer += 's';
                break;
            case 10:
                answer += 'd';
                break;
            case -10:
                answer += 'a';
                break;
        }
    }
    return answer;
}