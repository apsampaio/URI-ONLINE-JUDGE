var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let value1 = lines.shift().split(' ');
let value2 = lines.shift().split(' ');
let totalvalue = Number(value1[1]) * Number(value1[2]) + Number(value2[1]) * Number(value2[2]); 
console.log("VALOR A PAGAR: R$ " + totalvalue.toFixed(2));