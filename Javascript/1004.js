var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let A,B;
A = parseInt(lines.shift());
B = parseInt(lines.shift());
PROD = A * B;
console.log("PROD = " + PROD);