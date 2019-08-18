#include <stdio.h>
 
int main() {
 
    int time, speed;
    scanf("%d %d", &time, &speed);
    double result = time * speed;
    printf("%.3f\n", (result / 12));
 
    return 0;
}