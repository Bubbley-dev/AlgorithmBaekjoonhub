function solution(my_string, queries) {
    let new_string = []
    for (let i=0; i<my_string.length; i++) {
        new_string.push(my_string[i])
    }
    console.log(new_string)
    for (const q of queries) {
        const s = q[0]
        const e = q[1]
        let temp = []
        
        for (let i=0; i<my_string.length; i++) {
            if (i < s || i > e) {
                temp[i] = new_string[i]
            } else {
                temp[i] = new_string[s+e-i]
            }
        }
        new_string = temp
    }
    return new_string.join('');
}