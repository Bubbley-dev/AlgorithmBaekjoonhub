function solution(my_string, is_suffix) {
    let suffix = []
    for (let i=1; i<=my_string.length; i++) {
        suffix.push(my_string.slice(my_string.length-i))
    }
    
    // console.log(is_suffix, suffix)
    
    return suffix.includes(is_suffix) ? 1 : 0
}