#include<stdio.h>
int main()
{
    int Num1=0;

    printf("Enter Any Number ");
    scanf("%d",&Num1);

   if (Num1%5==0 && Num1%11==0)
   {
    printf("\n %d Is Devisible by 5 & 11 \n",Num1);
   }
    else
    {
    printf("\n %d Is Not Devisible by 5 & 11 \n",Num1);
    }

}
