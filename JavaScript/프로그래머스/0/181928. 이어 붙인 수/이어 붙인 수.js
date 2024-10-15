function solution(num_list) {
    let answer = 0;
    let even = '';
    let odd = '';
    
    for (let i=0; i<num_list.length; i++){
        if (num_list[i] % 2 == 0) {
            even += String(num_list[i]);
        } else {
            odd += String(num_list[i]);
        }
    }
    
    answer = Number(even)+Number(odd);
    
    return answer;
}