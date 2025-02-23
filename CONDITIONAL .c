// CONDITIONAL AND SWITCH CASE STATEMENTS


/* 2.1 WAP TO INPUT THE ANNUAL TAXABLE INCOME AND COMPUTE THE TAX ACORDING TO THE GIVEN CONDITION.
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
} */


/* 2.2 WAP TO CALCULATE THE MONTHLY TELEPHONE BILLS AS PER THE FOLLOWING RULE.
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
} */


/* 2.3 WRITE A CURRENCY PROGRAM THAT TELLS YOU HOW MANY 500, 200, 100, 50, 20, 10, 5, 2 AND 1 RS. NOTES WILL BE NEEDED FOR A GIVEN AMOUNT OF MONEY.
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
} */


/* 2.4 WAP THAT ESTIMATED THE PRICE OF RINGS FOR AN ONLINE SHOP THAT SELLS RINGS WITH CUSTOM ENGRAVINGS. THE ONLINE SHOP HAS THE FOLLOWING PRICE STRUCTURE: 
GOLD PLATED RINGS HAVE A BASE COST OF RS. 500, AND YOU CHARGE 70.30 PER ENGRAVED UNIT. 
SOLID GOLD RINGS HAVE A BASE COST OF RS. 1000, AND YOU CHARGE 10.40 PER ENGRAVED UNIT. 
SILVER PLATED RINGS HAVE A BASE COST OF RS. 300, AND YOU CHARGE 5.10 PER ENGRAVED UNIT. 
FIND THE TOTAL COST AS PER THE RING PURCHASE BY CUSTOMER
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
} */
