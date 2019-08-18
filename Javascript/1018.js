var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var aux = parseInt(lines.shift());
console.log(aux);
console.log("%d nota(s) de R$ 100,00", parseInt(aux / 100));
aux = aux % 100;
console.log("%d nota(s) de R$ 50,00", parseInt(aux / 50));
aux = aux % 50;
console.log("%d nota(s) de R$ 20,00", parseInt(aux / 20));
aux = aux % 20;
console.log("%d nota(s) de R$ 10,00", parseInt(aux / 10));
aux = aux % 10;
console.log("%d nota(s) de R$ 5,00", parseInt(aux / 5));
aux = aux % 5;
console.log("%d nota(s) de R$ 2,00", parseInt(aux / 2));
aux = aux % 2;
console.log("%d nota(s) de R$ 1,00", parseInt(aux));