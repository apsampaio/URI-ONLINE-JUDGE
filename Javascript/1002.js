var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let pi = 3.14159;
let radius = Number(lines.shift());
let area = pi * Math.pow(radius,2); 
console.log("A=" + area.toFixed(4));