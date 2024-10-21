function solution(arr) {
    let stk = []
    let i = 0
    
    while (i<arr.length) {
        const end = stk.length
        if (end == 0) {
            stk.push(arr[i])
            i++
        } else if (stk[end-1] < arr[i]) {
            stk.push(arr[i])
            i++
        } else {
            stk.pop()
        }
    }
    return stk;
}