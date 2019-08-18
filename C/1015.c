#include <stdio.h>
 
int main() {
 
    double X1,X2,Y1,Y2;
    scanf("%lf %lf %lf %lf", &X1, &Y1, &X2, &Y2);
    printf("%.4f\n", sqrt( pow((X2-X1),2) + pow((Y2-Y1),2) ));
 
    return 0;
}