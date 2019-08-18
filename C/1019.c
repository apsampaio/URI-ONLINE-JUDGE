#include <stdio.h>
 
int main() {
 
    int aux;
    scanf("%d", &aux);
    int hour = (aux/3600);
    aux %= 3600;
    int minutes = (aux/60);
    aux %= 60;
    printf("%d:%d:%d\n", hour,minutes,aux);
 
    return 0;
}