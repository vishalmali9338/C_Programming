#include<stdio.h>
int main()
{
    int Num1=0;

    printf("Enter Any Number ");
    scanf("%d",&Num1);

   if (Num1>0)
   {
    printf("\n %d Number is Positive \n",Num1);
   }
   else if(Num1==0)
   {
     printf("\n %d is Zero Number  \n",Num1);
   }
    else
    {
     printf("\n %d Number is Negative \n ",Num1);
    }

}
