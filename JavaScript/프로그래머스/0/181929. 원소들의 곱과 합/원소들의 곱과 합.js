function solution(num_list) {
    let answer = 0;
    let result1 = 1;
    let result2 = 0;
    
    for(let i=0; i<num_list.length; i++){
        result1 *= num_list[i];
        result2 += num_list[i];
    }
    
    if(result1 < result2*result2) { answer = 1; }
    return answer;
}