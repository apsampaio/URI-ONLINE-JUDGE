#include <stdio.h>
 
int main() {
 
    int X; // Distance
    float Y; // fuel

    scanf("%d %f", &X, &Y);
    printf("%.3f km/l\n", X/Y);
 
    return 0;
}