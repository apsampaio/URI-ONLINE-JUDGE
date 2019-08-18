var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let newDist = Number(lines.shift()) * 2;
console.log("%d minutos", newDist);