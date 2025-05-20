#include <stdio.h>
#define pi 3.14 // used define for value of pi
int main()
{
    int ir, or; // ir = inner radius,or = outer radius

    printf("Enter inner radius of Ring =");
    scanf("%d", &ir); // accepots the inner radius
    printf("Enter outer radius of Ring =");
    scanf("%d", &or); // accepots the outer radius

    float peri = 2 * pi * (ir + or);           // formula for perimeter of ring
    float area = pi * ((or * or) - (ir * ir)); // formula for area of ring

    printf("Area of ring is = %.2f\n", area);
    printf("Perimeter of Ring is = %.2f", peri);
}