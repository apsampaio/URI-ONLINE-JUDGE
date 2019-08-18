var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let name = lines.shift();
let salary = Number(lines.shift());
let sales  = Number(lines.shift());
let TOTAL = salary + ((sales * 15) / 100);

console.log("TOTAL = R$ " + TOTAL.toFixed(2));