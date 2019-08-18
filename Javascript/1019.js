var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var aux = parseInt(lines.shift());
var hour = aux/3600;
aux %= 3600;
console.log("%d:%d:%d", parseInt(hour),parseInt(aux/60),parseInt(aux%60));