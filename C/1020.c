#include <stdio.h>
 
int main() {
 
    int aux;
    scanf("%d", &aux);
    printf("%d ano(s)\n", (aux/365));
    aux %= 365;
    printf("%d mes(es)\n", (aux/30));
    printf("%d dia(s)\n", (aux%30));
 
    return 0;
}