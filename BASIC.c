/* 1.1 WRITE A PROGRAM TO INPUT AND ADD TWO NUMBERS.
#include<stdio.h>
int main()
{
   int a,b,sum;
   printf("Please enter the value of A and B");
   scanf("%d%d",&a,&b);
   sum=a+b;
   printf("sum is %d",sum);
   return 0;
} */


/* 1.2 WRITE A PROGRAM TO CONVERT TO FAHRENHEIT TO CELSIUS AND CELSIUS TO FAHRENHEIT.
#include<stdio.h>
int main()
{
    float fa,cel;
    printf("enter the value of forenheit");
    scanf("%f",&fa);
    cel=fa-32*5/9;
    printf("celcius is %f",cel);
    return 0;
}*/

/* #include<stdio.h>
int main()
{
    float fa,cel;
    printf("enter the value of celcius");
    scanf("%f",&cel);
    fa=cel*9+32/5;
    printf("forenhit is %f",fa);
    return 0;
} */


/* 1.3 WRITE A PROGRAM TO CALCULATE AREA OF A RECTANGLE
#include<stdio.h>
int main()
{
     float ar,ln,wd;
     printf("please enter the length of rectangle");
     scanf("%f",&ln);
     printf("please enter the width of rectangle");
     scanf("%f",&wd);
     ar=ln*wd;
     printf("Area of rectangle is %.2f",ar);
     return 0;
} */


/* 1.4 WAP TO CALCULATE AREA AND PERIMETER OF A CIRCLE.
#include<stdio.h>
int main()
{
   float r,a,p;
   printf("Enter the radius of circle");
   scanf("%f",&r);
   a=3.14*r*r;
   p=2*3.14*r;
   printf("Area of circle : %.2f\n",a);
   printf("perimeter of the circle :%.2f\n",p);
   return 0;
} */


/* 1.5 WAP TO DETERMINE THE ROOTS OF QUADRATIC EQUATION.
#include<stdio.h>
int main()
{
    float a,b,c;
    float dis,r1,r2;
    printf("enter cofficients a,b and c");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b-4*a*c;
    r1=(-b+sqrt(fabs(dis)))/(2*a);
    r2=(-b-sqrt(fabs(dis)))/(2*a);
    printf("r1=%.2f\n",r1);
    printf("r2=%.2f\n",r2);
    printf("dis=%.2f\n",dis);
    printf("roots are sqrt\n",(dis)>=0" ":"not");
    return 0;
} */


/* 1.6 WAP TO CALCULATE SIMPLE INTEREST.
#include<stdio.h>
int main()
{
   float p,r,si,t;
   printf("enter the value of principle,rate,time");
   scanf("%f%f%f",&p,&r,&t);
   si=p*r*t/100;
   printf("simple intrest is %.2f",si);
   return 0;
} */


/* 1.7 WAP TO CALCULATE COMPOUND INTEREST.
#include<stdio.h>
#include<math.h>
int main()
{
    float pr,r,amt,ci;
    int t;
    printf("enter the principle ammount");
    scanf("%f",&pr);
    printf("enter the rate of intrest");
    scanf("%f",&r);
    printf("enter the time");
    scanf("%d",&t);
    amt=pr*pow((1+r/100),t);
    printf("ammount is %f",amt);
    ci=amt-pr;
    printf("ci is %f",ci);
    return 0;
} */


/* 1.8 WAP TO SWAP TWO NUMBERS USING THIRD VARIABLE, WITHOUT USING THIRD VARIABLE WITHIN SINGLE STATEMENT USING COMMA OPERATOR.
#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("enter the two number");
   scanf("%d%d",&a,&b);
   printf("before swapping a is %d,b is %d",a,b);
   temp=a,a=b,b=temp;
   printf("After swapping a is %d,b is %d",a,b);
   printf("a is %d",a);
   printf("b is %d",b);
   return 0;
} */

/* #include<stdio.h>
int main()
{
   int a,b;
   printf("enter the two number");
   scanf("%d%d",&a,&b);
   printf("before swapping a is %d,b is %d",a,b);
   a=(a+b)-(b=a);
   printf("After swapping a is %d,b is %d",a,b);
   return 0;
} */


/* 1.9 WAP TO INPUT TWO NUMBERS AND FIND THE GREATEST NUMBER USING TERNARY OPREATOR.
#include<stdio.h>
int main()
{
   int a,b,greatest;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   greatest=(a>b)?a:b;
   printf("greatest No. is %d\n",greatest);
   return 0;
} */


/* 1.10 WAP TO FIND ODD/EVEN NUMBER USING TERNARY OPERATOR.
#include<stdio.h>
int main()
{
   int num;
   printf("enter the number");
   scanf("%d",&num);
   (num%2==0)?printf("%d is even \n",num):printf("%d is odd \n",num);
   return 0;
} */


/*1.11 WRITE A PROGRAM TO INPUT THREE NUMBERS AND FIND GREATEST NUMBER USING TERNARY OPERATOR.
#include<stdio.h>
int main()
{
   int a,b,c,greatest;
   printf("enter the three number");
   scanf("%d%d%d",&a,&b,&c);
   greatest=(a>b)
      ?((a>c)?a:c)
      :((b>c)?b:c);
      printf("greatest number is %d",&greatest);
      return 0;
} */


/* 1.12 ENTER ARITHMETIC OPERATOR FROM USER, PERFORM OPERATIONS ON TWO NUMBERS ACCORDING TO THE OPERATOR USING TERNARY OPERATOR.
#include <stdio.h>
int main() {
    double num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    result = (operator == '+') ? (num1 + num2) :
             (operator == '-') ? (num1 - num2) :
             (operator == '*') ? (num1 * num2) :
             (operator == '/') ? (num2 != 0 ? num1 / num2 : 0) : 0;
    if (operator == '/' && num2 == 0) {
        printf("Error: Division by zero!\n");
    } else {
        printf("Result: %.2lf\n", result);
    }
    return 0;
} */


/* 1.13 FIND ODD/EVEN NUMBER USING BITWISE OPERATOR.
#include<stdio.h>
int main()
{
   int num;
   printf("enter the number");
   scanf("%d",&num);
   printf("%d is %s\n num,(num&1)?""odd":"even");
   return 0;
} */


/* 1.14 WAP TO SWAP TWO NUMBERS USING BITWISE OPREATOR.
#include<stdio.h>
int main()
{
   int a,b;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   printf("before swapping a is %d,b is %d",a,b);
   a=a^b;
   a=a^b;
   b=a^b;
   printf("After swapping a is %d,b is %d",a,b);
   return 0;
} */


/* 1.15 FIND EXACT POWER OF 2 OF A GIVEN NUMBER USING BITWISE OPERATOR.
#include<stdio.h>
int main()
{
   int num;
   printf("please enter the number");
   scanf("%d",&num);
   printf("%d is %s a power of 2 \n",num,(num>0&&(num-1)==0)?" " :"not");
   return 0;
} */
