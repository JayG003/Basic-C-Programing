#include <stdio.h>
int main()
{
    int f;

    printf("Enter the fahrenheit temp =");
    scanf("%d", &f); // accepts temp in fahrenheit

    float cels = ((f - 32) * (5.0 / 9.0)); // formula for celsius
    float kelv = cels + 273.15;            // formula for Kelvin

    printf("Temp in Celsius is = %.2f\n", cels); // print the o/p
    printf("Temp in Kelvin is = %.2f", kelv);    // print the o/p
}