var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let aux = parseInt(lines.shift());
console.log("%d ano(s)", parseInt(aux/365));
aux %= 365;
console.log("%d mes(es)", parseInt(aux/30));
console.log("%d dia(s)", parseInt(aux%30));