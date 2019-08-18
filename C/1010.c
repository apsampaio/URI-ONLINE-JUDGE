#include <stdio.h>
 
int main() {
 
    int id1, number1, id2, number2;
    float value1, value2;

    scanf("%d %d %f", &id1, &number1, &value1);
    scanf("%d %d %f", &id2, &number2, &value2);

    printf("VALOR A PAGAR: R$ %.2f\n", (number1 * value1 + number2 * value2));
 
    return 0;
}