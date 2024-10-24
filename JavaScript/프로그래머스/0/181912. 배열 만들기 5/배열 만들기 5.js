function solution(intStrs, k, s, l) {
    var answer = [];
    intStrs.forEach((str) => {
        let num = ''
        for (let i=s; i<s+l; i++) {
            num += str[i]
        }
        // console.log(num)
        if (num > k) {
            answer.push(Number(num))
        }
    })
    return answer;
}