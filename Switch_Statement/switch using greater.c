#include<stdio.h>

int main()
{
    int n1=0,n2=0;
    char choice;

    printf("\n Enter Two Numbers");
    scanf("%d%d",&n1,&n2);

    switch(n1<n2)
    {
    case 1:
        printf(" %d is greater",n2);
         break;
    case 0:
            printf("%d is greater",n1);
        break;
    }



}
