#include<stdio.h>
int main()
{
    int num=0;

    printf("\n Enter Month Number To Print Number Of Day \n \n");
    scanf("%d",&num);

    if(num==1)
    {
    printf("Month January Days 31 \n");
    }
    else if(num==2)
    {
    printf("Month February Days 28 \n");    }
    else if(num==3)
    {
    printf("Month March Days 31 \n");
    }
    else if(num==4)
    {
    printf("Month April Days 30 \n");
    }
    else if(num==5)
    {
     printf("Month May Days 31 \n");
    }
    else if(num==6)
    {
     printf("Month June Days 30 \n");
    }
    else if(num==7)
    {
        printf("Month July Days 31\n");
    }
    else if(num==8)
    {
        printf("Month August Days 31\n");
    }
    else if(num==9)
    {
        printf("Month September Days 30\n");
    }
    else if(num==10)
    {
        printf("Month Octomber Days 31\n");
    }
    else if(num==11)
    {
        printf("Month November Days 30\n");
    }
    else if(num==12)
    {
        printf("Month December Days 31\n");
    }
    else
    {
        printf("\n Invalid Month Number \n");
    }


}
