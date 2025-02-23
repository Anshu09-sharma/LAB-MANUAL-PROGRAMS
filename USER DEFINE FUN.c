/*1.WRITE A PROGRAM TO PRINT OUT ALL THE ARMESTRONG NUMBER BETWEEN 100 AND 500 USING USER DEFINE
//FUNCTION.
#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int sum = 0, temp, remainder, digits = 0;
    temp = num;
    while (temp != 0) {
        temp=temp/ 10;
        digits++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    return (sum == num);
}
int main() {
    printf("Armstrong numbers between 100 and 500 are:\n");
    for (int i = 100; i <= 500; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}*/
/*WAP TO PRINT THE ENTIRE PRIME NO. BETWEEN 1 AND 300 USING USER DEFINE FUNCTION.
#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() 
{
    printf("Prime numbers between 1 and 300 are:\n");
    for (int i = 2; i <= 300; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}*/
/*WAP TO FIND SUM OF FIBONACCI SERIES UP TO N USING FUNCTION.
#include <stdio.h>
int fibonacciSum(int n) {
    int a = 0, b = 1, sum = 0;
    if (n >= 1) {
        sum += a;  
    }
    for (int i = 2; i <= n; i++) {
        sum += b;
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
     }
    int sum = fibonacciSum(n);
    printf("The sum of the first %d Fibonacci numbers is: %d\n", n, sum);
    return 0;
}*/



