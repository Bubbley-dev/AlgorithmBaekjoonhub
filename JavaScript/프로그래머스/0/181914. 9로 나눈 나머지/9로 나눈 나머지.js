function solution(number) {
    var answer = 0;
    
    for (const n of number) {
        answer += Number(n)
    }
    
    answer = answer % 9
    
    return answer;
}