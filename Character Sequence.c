#include <stdio.h>
int main()
{
    char a; // variable for character

    printf("Enter any character =");
    scanf("%c", &a);

    printf("previous character is =%c\n", a - 1);
    printf("next character is =%c", a + 1);
}