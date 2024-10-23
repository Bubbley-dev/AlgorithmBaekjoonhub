function solution(...dices) {
    var answer = 1;
    
    let count = [0, 0, 0, 0, 0, 0, 0]
    
    for (const dice of dices) {
        count[dice] += 1
    }
    let a, b, e
    
    let c = ''
    let d = []
    
    for (let i=1; i<7; i++) {
        if (count[i] !== 0) { 
            c += String(count[i])
            d.push(i)
        }
    }
    
    switch (c) {
        case '4':
            answer = Number(d) * 1111
            break
        
        case '31':
            a = Number(d[0])
            b = Number(d[1])
            answer = (10 * a + b) * (10 * a + b)
            break
        case '13':
            a = Number(d[1])
            b = Number(d[0])
            answer = (10 * a + b) * (10 * a + b)
            break
            
        case '22':
            a = Number(d[0])
            b = Number(d[1])
            const abs = (a, b) => a-b>=0 ? a-b : b-a
            answer = (a + b) * abs(a,b)
            break
        
        case '112':
        case '121':
        case '211':
            for (let i=0; i<3; i++){
                if (c[i] === '1') {
                    answer *= Number(d[i])
                }
            }
            break
        
        case '1111':
            answer = d.sort()[0]
            break
    }
    
    return answer;
}