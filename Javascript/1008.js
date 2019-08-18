var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let employeeNumber = parseInt(lines.shift());
let workTime = parseInt(lines.shift());
let paymentHour = parseFloat(lines.shift());
let salary = workTime * paymentHour;

console.log("NUMBER = " + employeeNumber);
console.log("SALARY = U$ " + salary.toFixed(2))