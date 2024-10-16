function solution(arr, queries) {
    var answer = [];
    
    for (const q of queries) {
        const s = q[0];
        const e = q[1];
        const k = q[2];
        
        let t = 10000000;
        
        for (let i = s; i <= e; i++) {
            if (arr[i] > k && arr[i] < t) {
                t = arr[i];
            }
        }
        
        if (t === 10000000) { t = -1 }
        answer.push(t);
    }
    
    return answer;
}