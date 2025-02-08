/*3.1 WAP TO PRINT THE FIBONACCI SERIES
#include<stdio.h>
int main()
{
    int n,i;
    double long first=0,second=1,next;
    printf("enter the number of terms in the fibonacci series");
    scanf("%d",&n);
    printf("*****Fibonacci Series*****");
    for(i=0;i<=n;i++)
    {
      if(i<=1)
      {
        next=i;
      }
      else{
            next=first+second;
            first=second;
            second=next;
      }
      printf("ld",next);
    }
    printf("\n");
    return 0;
}*/
/*3.2 WAP TO ENTER A NUMBER FROM USER CHECK THAT NUMBER IS PRIME OR NOT.
#include<stdio.h>
int main()
{
    int num,i,prime=1;
    printf("please enter a number");
    scanf("%d",&num);
    if(num<=1)
    {
       prime=0;
    }
    else
    {
        for(i=2;i*i<=num;i++)
        {
           if(num%1==0)
           {
             prime=0;
             break;
           }
        }
    }
    if(prime)
    {
      printf("%d is a prime number \n",num);
    }
    else
    {
      printf("%d is not a prime number \n",num);
    }
    return 0;
}*/
/*3.3WAP TO PRINT A MULTIPLICATION TABLE OF N NUMBER IN REVERSE WORDS.
#include<stdio.h>
int main()
{
   int n,i;
   printf("please enter a number");
   scanf("%d",&n);
   printf("multiplication table of %d in reverse order:\n",n);
   for(i=10;i>=1;i--)
   {
       printf("%d%d=%d \n",n,i,n*i);
   }
   return 0;
}*/
/*3.4WAP TO ENTER A NUMBER FROM USER REVERSE THAT NUMBER.
#include<stdio.h>
int main()
{
    int num,renum,remainder;
    printf("enter an number");
    scanf("%d",num);
    for(;num!=0;num/=10)
    {
       remainder=num%10;
       renum=renum*10+remainder;
    }
    printf("renum=%d\n",renum);
    return 0;
}*/
/*3.5WAP ENTER A NUMBER FROM USER CHECK THAT IS NUMBER ARMESTRONG OR NOT.
#include<stdio.h>
#include<math.h>
int main() {
    int num,Armstrong;
    while (1) {
        printf("Enter a number (negative number to exit): ");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        if (isArmstrong(num)) {
            printf("%d is an Armstrong number.\n", num);
        } else {
            printf("%d is not an Armstrong number.\n", num);
        }
    }
    printf("Exiting program...\n");
    return 0;
}*/
/*3.6WAP TO FIND OUT THE VALUE OF X RAISED TO THE POWER Y,WHERE X AND Y ARE POSITIVE INTEGER
#include <stdio.h>
int main() {
    int x, y,i;
    long long result = 1;  
    printf("Enter a positive integer for x (base): ");
    scanf("%d", &x);
    printf("Enter a positive integer for y (exponent): ");
    scanf("%d", &y);
    if (x <= 0 || y < 0) {
        printf("Both x and y must be positive integers.\n");
        return 1;  
    }
    for (i = 1; i <= y; i++) {
        result *= x; 
}
    printf("%d raised to the power %d is: %lld\n", x, y, result);
    return 0;
}*/
/*3.7WAP TO FIND THE H.C.F OF TWO NUMBERS.
#include <stdio.h>
int main() {
    int num1, num2, i, hcf;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    for (i = 1; i <= num1 && i <= num2; ++i){
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}*/
/*3.8WAP TO RECEIVE A FIVE DIGIT NO AND DISPLAY AS LIKE:24689:
2
4
6
8
9
#include <stdio.h>
int main() {
    int num, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999) {
        printf("Please enter a valid five-digit number.\n");
        return 1;  
    }
    while (num > 0) {
        digit = num % 10;    
        printf("%d\n", digit);  
        num = num / 10;      
    }
    return 0;
}*/
/*3.9GUESS THE LOWER NUMBER AND HIGHER.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,attempts=0;
    srand(time(0));
    number=rand()%100+1;
    printf("i have picked a number guessing game !\n");
    printf("i have picked a number b|w 1 and 100.can you guess it? \n");
    do{
         printf("Enter your guess");
         scanf("%d",&guess);
         attempts++;
         if(guess>number)
         {
            printf("Lower number please!\n");
         }
         else if(guess<number)
         {
            printf("Higher number please!\n");
         }
         else
         {
       printf("congratulations ! you guessed the correct number in %d attempts.\n",attempts);
         }
         }while(guess!=number);
         return 0;
}*/
/* 10.RIGHT TRIANGLE PATTERN
#include<stdio.h>
int main()
{
   int i,j,k,n;
   printf("enter the number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=i;j++)
     {
       printf("");
     }
     for(k=1;k<=i;k++){
       printf("*");
     }
     printf("\n");
   }
   return 0;
}*/
/*11.HOLLOW MIRRORED RIGHT TRIANGLE STAR PATTERN.
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            
            if(i==rows || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}*/
/*12.
#include<stdio.h>
#include<ctype.h>
int main( )
{
  int r,c,ascii;
  
  for( r=7; r>=1; r-- )
  {
    ascii=65;
    for(c=1; c<=r; c++ )
      printf("%1c", ascii++ );
    ascii--; 
    for(c=r; c>=1; c--)
       printf("%1c", ascii--);
   
   printf("\n");
  }
  return 0;
}*/
