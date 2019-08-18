#include <stdio.h>
 
int main() {
 
    int employeeNumber, workTime;
    float paymentValue;

    scanf("%d", &employeeNumber);
    scanf("%d", &workTime);
    scanf("%f", &paymentValue);

    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2f\n", workTime * paymentValue);
 
    return 0;
}