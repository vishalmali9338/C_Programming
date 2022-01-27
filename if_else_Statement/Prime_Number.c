#include<stdio.h>

int main()
{
    int count=0,no=0;
    up:
    printf("\n Enter Any Number \n");
    scanf("%d",&no);

    if(no<=0)
    {
        printf(" Invalid Number ");
        goto up;
    }

    for(count=2;count<=no;count++)
    {
        if(no%count==0)
        {
            break;
        }
    }
    if(count == no)
    {
        printf("\n Given Number %d is Prime \n",no);
    }
    else
    {
        printf("\n Given Number %d is Not Prime \n",no);
    }

    return 0;
}
