#include <stdio.h>
 
int main() {
 
   int value;
    int notaCem = 0, notaCinquenta = 0, notaVinte = 0, notaDez = 0, notaCinco = 0, notaDois = 0, notaUm = 0;
    scanf("%d", &value);
    printf("%d\n", value);
    while(value > 0){

        if(value >= 100){

            value -= 100;
            notaCem++;

        } if(value < 100 && value >= 50){

            value -= 50;
            notaCinquenta++;

        } if(value < 50 && value >= 20){

            value -= 20;
            notaVinte++;

        } if(value < 20 && value >= 10){

            value -= 10;
            notaDez++;

        } if(value < 10 && value >= 5){

            value -= 5;
            notaCinco++;

        } if(value < 5 && value >= 2){

            value -= 2;
            notaDois++;
        } if(value < 2 && value >= 1){
            notaUm++;
            value--;
        }

    }
    printf("%d nota(s) de R$ 100,00\n", notaCem);
    printf("%d nota(s) de R$ 50,00\n", notaCinquenta);
    printf("%d nota(s) de R$ 20,00\n", notaVinte);
    printf("%d nota(s) de R$ 10,00\n", notaDez);
    printf("%d nota(s) de R$ 5,00\n", notaCinco);
    printf("%d nota(s) de R$ 2,00\n", notaDois);
    printf("%d nota(s) de R$ 1,00\n", notaUm);
 
    return 0;
}