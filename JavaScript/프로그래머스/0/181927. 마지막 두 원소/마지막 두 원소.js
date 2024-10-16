function solution(num_list) {
    let answer = [];
    const N = num_list.length;
    const n1 = num_list[N-1];
    const n2 = num_list[N-2];
    let a = 0
    if (num_list[N-1] > num_list[N-2]){
        a = n1 - n2;
    } else {
        a = n1 * 2;
    }
    
    num_list.push(a);
    answer = num_list;
    
    return answer;
}