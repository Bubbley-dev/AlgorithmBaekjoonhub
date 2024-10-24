function solution(my_strings, parts) {
    var answer = '';
    for (let i=0; i<parts.length; i++) {
        const str = my_strings[i]
        const s = parts[i][0]
        const e = parts[i][1]+1
        // console.log(str, s, e)
        answer += str.slice(s, e)
    }
    return answer;
}