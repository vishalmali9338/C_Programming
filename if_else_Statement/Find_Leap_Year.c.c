#include<stdio.h>
int main()
{
    int year=0;
    printf("\n Enter Any Year \n  ");
    scanf("%d",&year);


    if(year%4==0 )
    {
    printf(" \n  year %d is a leap year \n",year);
    }
    else if(year%100==0 )
    {
    printf(" \n  year %d is a  not leap year \n",year);
    }
   else if (year%400==0)
    {

        printf(" \n  year %d is  a leap year \n ",year);

    }
    else
    {
          printf(" Year %d is Not Leap Year \n ",year);
    }

    getch();
}
