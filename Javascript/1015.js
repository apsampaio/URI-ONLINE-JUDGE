var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let values = lines.shift().split(' ');
let x1 = Number(values[0]), y1 = Number(values[1]);
values = lines.shift().split(' ');
let x2 = Number(values[0]), y2 = Number(values[1]);

console.log(Number( Math.sqrt( Math.pow((x1 - x2), 2) + Math.pow((y1 - y2), 2) ).toFixed(4) ));
