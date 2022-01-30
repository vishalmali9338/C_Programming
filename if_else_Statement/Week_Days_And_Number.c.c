#include<stdio.h>

int main()
{
   int num=0;

    printf("\n Enter Day Number To Print Day \n \n");
    scanf("%d",&num);

    if(num==1)
    {
    printf(" Sunday \n");
    }
    else if(num==2)
    {
    printf(" Monday \n");
    }
    else if(num==3)
    {
    printf(" Tuesday \n");
    }
    else if(num==4)
    {
    printf(" Wensnday \n");
    }
    else if(num==5)
    {
        printf(" Thursday \n");
    }
    else if(num==6)
    {
        printf(" Friday \n");
    }
    else if(num==7)
    {
        printf(" Saturday \n");
    }
    else
    {
        printf("\n Invalid Number \n");
    }
}
