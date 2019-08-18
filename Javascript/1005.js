var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let A = Number(lines.shift());
let B = Number(lines.shift());
let MEDIA = (A * 3.5 + B * 7.5) / 11;
console.log("MEDIA = " + MEDIA.toFixed(5));