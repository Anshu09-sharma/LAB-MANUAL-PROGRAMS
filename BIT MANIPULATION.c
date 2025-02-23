    //BIT MANIPULATION
/*1.PRINT THE POWER OF ANY NUMBER.
#include <stdio.h>
int main() {
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d",&base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer is  %.0Lf", result);
    return 0;
}*/
/*2.GIVE AN ITEGER N, CALCULATE THE SQUARE OF A NUMBER WITOUT USING *,AND POW().
#include<stdio.h>
int main() {
    int n, i, square = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        square =square+n;
    }
    printf("The square of %d is: %d\n", n, square);
    return 0;
}*/


