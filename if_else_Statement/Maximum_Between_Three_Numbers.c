#include<stdio.h>
int main()
{
    int Num1=0,Num2=0,Num3=0;

    printf("Enter Any Three Number");
    scanf("%d%d%d",&Num1,&Num2,&Num3);
    if(Num1>Num2 && Num1>Num3)
    {
      printf("\n %d is Maximum Number  \n",Num1);

    }
    else if(Num2>Num1 && Num2>Num3)
    {
      printf("\n %d is Maximum Number  \n",Num2);

    }
    if(Num3>Num2 && Num3>Num1)
    {
      printf("\n %d is Maximum Number  \n",Num3);

    }


}

