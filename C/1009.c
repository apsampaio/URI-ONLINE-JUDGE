#include <stdio.h>
 
int main() {
 
    char name[100];
    double salary,sales;

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sales);
    
    printf("TOTAL = R$ %.2f\n", salary + ((sales * 15) / 100));
 
    return 0;
}