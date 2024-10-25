function solution(my_string, s, e) {
    var answer = '';
    
    for (let i=0; i<my_string.length; i++) {
        if (s <= i && i <= e) {
            answer += my_string[s+e-i]
        } else {
            answer += my_string[i]
        }
    }
    
    return answer;
}
