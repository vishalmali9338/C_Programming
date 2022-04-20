#include<stdio.h>
void main()
{
    int num=0;

    printf(" \n Enter Any Number  ");
    scanf("%d",&num);

    switch(num%2!=0)
    {

    case 0:
        printf(" \n Number %d Is Even ",num);
        break;

    case 1:
        printf("\n Number %d Is Odd",num);
        break;
    }
}
