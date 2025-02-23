/*Write a program to calculate the GCD of given number using recursion.
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    return 0;
}*/
//2 Write a program to find the sum of digits of a 5 digit number using recursion.
#include <stdio.h>
int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}
int main() {
    int number;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    if (number < 10000 || number > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return 1;
    }
    int sum = sumOfDigits(number);
    printf("The sum of the digits of %d is: %d\n", number, sum);

    return 0;
}

