function solution(arr)
{
    let last = -1;
    const answer = [];
    
    arr.forEach((e) => 
        {
            if (e != last)
            {
                answer.push(e);
                last = e;
            }
        }
    )
    
    return answer;
}