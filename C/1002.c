#include <stdio.h>
#include <math.h> 
 
int main() {
 
    double radius, pi = 3.14159;

    scanf("%lf", &radius);
    printf("A=%.4f\n",  pi * pow(radius,2));
 
    return 0;
}