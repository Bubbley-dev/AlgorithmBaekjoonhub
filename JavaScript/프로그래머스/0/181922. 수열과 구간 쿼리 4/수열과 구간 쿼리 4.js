function solution(arr, queries) {
    let answer = [];
    
    for (const q of queries) {
        const s = q[0];
        const e = q[1];
        const k = q[2];
        
        for (let i=s; i<=e; i++){
            if (i%k === 0) {
                arr[i] += 1;
            }
        }
    }
    
    return arr;
}