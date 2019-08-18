var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let time = Number(lines.shift());
let speed = Number(lines.shift());
let result = (time * speed) / 12;
console.log(result.toFixed(3));