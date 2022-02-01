#include<stdio.h>
int main()
{
    int Unit=0,Amount=0;

    printf("\n Enter The Unit ");
    scanf("%d",&Unit);

    if (Unit<=50)
    {
        Amount=(Unit*0.50);
        Amount+= Amount*0.2;
        printf("\n Amount Of Electricity is %d",Amount);
    }
    else if (Unit<=100)
    {
        Amount=(Unit*0.75);
        Amount+= Amount*0.2;
        printf("\n Amount Of Electricity is %d",Amount);
    }
    else if (Unit<=100)
    {
        Amount=(Unit*1.20);
        Amount+= Amount*0.2;
        printf("\n Amount Of Electricity is %d",Amount);
    }
    else if  (Unit>250)
    {
        Amount=(Unit*1.50);
        Amount+= Amount*0.2;
        printf("\n Amount Of Electricity is %d",Amount);
    }
}
