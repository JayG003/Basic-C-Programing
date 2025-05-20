#include <stdio.h>
#define pi 3.14 // used define for value of pi
int main()
{
    int r, h; // r = radius,h = heigh
    printf("Enter radius of cylynder =");
    scanf("%d", &r); // accepots the radius
    printf("Enter height of cylynder =");
    scanf("%d", &h);                                  // accepots the height
    float area = (2 * pi * r * r) + (2 * pi * r * h); // formula for surface area of cylinder
    float volume = pi * r * r * h;                    // formula for volume of cylinder
    printf("Area of cylynder is = %.2f\n", area);
    printf("Volume of cylynder = %.2f", volume);
}