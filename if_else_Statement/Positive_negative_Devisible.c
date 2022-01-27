#include<stdio.h>
int main()
{
    int Num1=0;

    printf("Enter Any Number ");
    scanf("%d",&Num1);

   if (Num1>0)
   {
    printf("\n %d Number is Positive \n",Num1);

    if(Num1%5==0 && Num1%9==0)
    {
      printf("\n Given Number is Devisible by 5 & 9 \n");
    }
    else
    {
        printf("\n Given Number is Not Divisible by 5 & 9 \n");
    }
    }
    else
    {
        printf("\n %d Number is Negative \n ",Num1);
    }

}
