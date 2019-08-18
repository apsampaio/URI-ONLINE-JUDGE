var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let ABCD = lines.shift().split(" ");
const {a, b, c, d} = {a: parseInt(ABCD[0]),
                      b: parseInt(ABCD[1]),
                      c: parseInt(ABCD[2]),
                      d: parseInt(ABCD[3])
                    }
if(b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0 && a%2 === 0)
    console.log("Valores aceitos");
else
    console.log("Valores nao aceitos");