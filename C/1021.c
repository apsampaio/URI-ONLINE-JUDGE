#include <stdio.h>
 
int main() {
 
int aux;
double money;
scanf("%lf", &money);
aux = (int)money;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",(aux/100));
aux %= 100;
printf("%d nota(s) de R$ 50.00\n",(aux/50));
aux %= 50;
printf("%d nota(s) de R$ 20.00\n",(aux/20));
aux %= 20;
printf("%d nota(s) de R$ 10.00\n",(aux/10));
aux %= 10;
printf("%d nota(s) de R$ 5.00\n",(aux/5));
aux %= 5;
printf("%d nota(s) de R$ 2.00\n",(aux/2));
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",(aux%2));
aux = (money - (int)money) * 100;
printf("%d moeda(s) de R$ 0.50\n",(aux/50));
aux %= 50;
printf("%d moeda(s) de R$ 0.25\n",(aux/25));
aux %= 25;
printf("%d moeda(s) de R$ 0.10\n",(aux/10));
aux %= 10;
printf("%d moeda(s) de R$ 0.05\n", (aux/5));
printf("%d moeda(s) de R$ 0.01\n", (aux%5));
 
    return 0;
}