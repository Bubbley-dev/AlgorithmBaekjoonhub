function solution(l, r) {
    let answer = [];
    for (let n=l; n<=r; n++){
        const number = String(n)
        let flag = true;
        for (const i of number){
            flag = true;
            if (i == '5' || i == '0'){
                continue;
            }else{
                flag = false;
                break;
            }
        }
        if (flag === true) {
            answer.push(n);
        }
    }
    if (answer == false) {
        answer.push(-1);
    }
    return answer;
}