#include <stdio.h>
 
int main() {
 
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    double MEDIA = (A * 2 + B * 3 + C * 5) / 10;
    printf("MEDIA = %.1f\n", MEDIA);
 
    return 0;
}