function solution(arr) {
    let answer = arr.reduce((sum, n)=>sum+n, 0)/arr.length
    
    return answer;
}