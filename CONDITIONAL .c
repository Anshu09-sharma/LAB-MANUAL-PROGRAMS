//CONDITIONAL AND SWITCH STATEMENT
/*2.1
#include<stdio.h>
int main()
{
   float income,tax=0;
   printf("enter your anual taxable income");
   scanf("%f",&income);
   if(income<=100000)
   {
     tax=0;
   }
   else if(income<=150000)
   {
     tax=(income-100000)*0.10;
   }
   else if(income<=250000)
   {
     tax=5000+(income-1500000)*0.20;
   }
   else{
         tax=250000+(income-250000)*0.30;
   }
   printf("the total tax to be paid is rs.%.2f\n",tax);
   return 0;
}*/
/*2.2
#include<stdio.h>
int main()
{
   int calls;
   float bills;
   printf("enter the number of calls");
   scanf("%d",&calls);
   if(calls<=50)
   {
     bills=100.0;
   }
   else if(calls<=100)
   {
     bills=100.0+(calls-50)*80;
   }
   else if(calls<=200)
   {
     bills=100.0+50*80+(calls-100)*60;
   }
   else
   {
      bills=100.0+50*0.80+100*0.6+(calls-200)*0.40;
   }
   printf("the total monthly telephone bills is %d,rs.%.2f\n",bills);
   return 0;
}*/
/*2.3
#include<stdio.h>
int main()
{
   int amt;
   int note500,note200,note100,note50,note20,note10,note5,note2,note1;
   note500=note200=note100=note50=note20=note10,note5=note2=note1;
   printf("please enter the ammount");
   scanf("%d",&amt);
   if(amt>=500)
   {
      note500=amt/500;
      amt-=note500*500;
   }
   if(amt>=200)
   {
      note200=amt/200;
      amt-=note200*200;
   }
   if(amt>=100)
   {
      note100=amt/100;
      amt-=note100*100;
   }
   if(amt>=50)
   {
      note50=amt/50;
      amt-=note50*50;
   }
   if(amt>=20)
   {
      note20=amt/20;
      amt-=note20*20;
   }
   if(amt>=10)
   {
      note10=amt/10;
      amt-=note10*10;
   }
   if(amt>=5)
   {
      note5=amt/5;
      amt-=note5*5;
   }
   if(amt>=2)
   {
      note2=amt/2;
      amt-=note2*2;
   }
   if(amt>=1)
   {
      note1=amt;
   }
   printf("total no.of note=\n");
   printf("500=%d\n",note500);
   printf("200=%d\n",note200);
   printf("100=%d\n",note100);
   printf("50=%d\n",note50);
   printf("20=%d\n",note20);
   printf("10=%d\n",note10);
   printf("5=%d\n",note5);
   printf("2=%d\n",note2);
   printf("1=%d\n",1);
   return 0;
}*/
/*2.4 
#include<stdio.h>
int main()
{
  int ring,engravings;
  float cost;
  printf("select the type of ring \n");
  printf("1.Gold Plated Ring \n");
  printf("2.Solid gold ring");
  printf("3.silver plated ring");
  printf("enter your choice 1-3");
  scanf("%d",&ring);
  printf("enter the number of engravings");
  scanf("%d",&engravings);
  switch(ring)
  {
     case 1:
      cost=500+(70.30*engravings);
      break;
      case 2:
        cost=1000+(10.40*engravings);
        break;
        case 3:
          cost=300+(5.10*engravings);
          break;
          default :
           printf("invalid choice ! \n");
           return 1;
  }
  printf("the total cost of the ring is rs.%.2f\n",cost);
  return 0;
}*/
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




