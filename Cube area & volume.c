#include <stdio.h>
int main()
{
    int l, b, h; // l=length,b=breadth,h=height

    printf("Enter the lenght of cuboid=");
    scanf("%d", &l); // accepts length
    printf("Enter the breadth of cuboid =");
    scanf("%d", &b); // accepts breadth
    printf("Enter the height of cuboid =");
    scanf("%d", &h); // accepts height

    float area = 2 * (l * b + b * h + l * h); // formula for area
    float volume = l * b * h;                 // formula for volume

    printf("Surface area of cuboid is = %.2f\n", area); // print the o/p
    printf("Volume of cuboid is = %.2f", volume);       // print the o/p
}