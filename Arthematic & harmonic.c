#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 1st no =");
    scanf("%d", &a); // accept 1st value
    printf("Enter 2nd no =");
    scanf("%d", &b); // accepts 2nd value

    float AM = (a + b) / 2;       // formula for arethimatic mean
    float HM = (a * b) / (a + b); // formula for harmonic mean

    printf("Arithematic mean is = %.2f\n", AM);
    printf("Harmonic mean is = %.2f", HM);
}