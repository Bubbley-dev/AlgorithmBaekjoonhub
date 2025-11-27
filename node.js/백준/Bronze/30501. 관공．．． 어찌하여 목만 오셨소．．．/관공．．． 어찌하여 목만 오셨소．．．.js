const  input = require('fs').readFileSync("/dev/stdin").toString().split("\n")
input.shift()
const ans = input.find(name => {
    return name.includes("S")
})
console.log(ans)