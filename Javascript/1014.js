var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let X = Number(lines.shift());
let Y = Number(lines.shift());
console.log("%f km/l", Number((X/Y).toFixed(3)));