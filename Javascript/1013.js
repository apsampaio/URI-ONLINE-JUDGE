var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let values = lines.shift().split(' ');
let maiorAB = (Number(values[0])+Number(values[1])+Math.abs(Number(values[0])-Number(values[1]))) / 2;
let maior = (maiorAB+Number(values[2])+Math.abs(maiorAB-Number(values[2]))) / 2;
console.log("%d eh o maior", maior);
