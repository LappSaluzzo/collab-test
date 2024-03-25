/* increment.c - Dumb program to increment input integer and print it to console */

#include <stdio.h>

int main(void)
{
    int d;
    
    printf("Enter an integer: ");
    scanf("%d", &d);
    printf("%d\n", ++d);

    return 0;
}