#include <stdio.h>
int main()
{
    int u, a, t;
    printf("Enter the initial velocity =");
    scanf("%d", &u); // accepts initial velocity
    printf("Enter the Accelaration =");
    scanf("%d", &a); // accepts accelaration
    printf("Enter the Time taken =");
    scanf("%d", &t);                           // accepts time
    float v = u + a * t;                       // formula for initial velocity
    float s = u * t + 0.5 * a * t * t;         // formula for distance
    printf("Initial velocity is = %.2f\n", v); // print the o/p
    printf("Time taken is = %.2f", s);         // print the o/p
}