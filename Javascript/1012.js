var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let values = lines.shift().split(' ');
value = Number(values[0]) * Number(values[2]) / 2;
console.log("TRIANGULO: " + value.toFixed(3));

value = 3.14159 * Math.pow(Number(values[2]),2);
console.log("CIRCULO: " + value.toFixed(3));

value = ((Number(values[0]) + Number(values[1])) * Number(values[2])) / 2;
console.log("TRAPEZIO: " + value.toFixed(3));

value = Math.pow(Number(values[1]),2);
console.log("QUADRADO: " + value.toFixed(3));

value = Number(values[0]) * Number(values[1]);
console.log("RETANGULO: " + value.toFixed(3));