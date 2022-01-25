#include<stdio.h>
int main()
{
   //Initialisation
    int Number=0,fact=1,i=0;
    int *num=&Number;

    printf("\n Enter Number TO its Factorial \n");
    scanf("%d",num);

    for(i=1;i<=*(num);i++)
    {
        fact=fact*i;
    }
    printf("\n Factorial Of Given Number is %d \n ",fact);
}
