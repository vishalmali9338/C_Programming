#include<stdio.h>
void main()
{
   int num1=0,num2=0,result=0;
   char choice;

   printf("\n Enter The Arithmatic Operator To Perform Operator ");
   scanf("%c",&choice);

   switch(choice)
   {
   case'+':
       printf("\n Enter Two Number To Perform Addition  ");
       scanf("%d%d",&num1,&num2);
    printf(" \n Addition of %d and %d =%d ",num1,num2,(num1+num2));
    break;

    case'-':
       printf("\n Enter Two Number To Perform Substraction ");
       scanf("%d%d",&num1,&num2);
    printf(" \n Substraction of %d and %d =%d ",num1,num2,(num1-num2));
    break;

    case'*':
       printf("\n Enter Two Number To Perform Multiplication  ");
       scanf("%d%d",&num1,&num2);
    printf(" \n Multiplication of %d and %d =%d ",num1,num2,(num1*num2));
    break;


    case'/':
       printf("\n Enter Two Number To Perform Division  ");
       scanf("%d%d",&num1,&num2);
    printf(" \n Division of %d and %d =%d ",num1,num2,(num1/num2));
    break;

    case'%':
       printf("\n Enter Two Number To Perform Modulo Division  ");
       scanf("%d%d",&num1,&num2);
    printf(" \n Modulo Division of %d and %d =%d ",num1,num2,(num1%num2));

   }
}
