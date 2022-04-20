#include<stdio.h>
void main()
{

    int num=0;
    printf("\n Enter Any Number  ");
    scanf("%d",&num);

     switch(num>0)
     {

     case 1:
        printf("\n Number Is Positive");
        break;
        case 0:
        switch(num<0)
   {
    case 1:
        printf("\n Number Is Negative");
        break;

     case 0:
        printf("\n Number Is Neutral");
     }
}
}
