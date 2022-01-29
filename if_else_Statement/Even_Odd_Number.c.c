#include<stdio.h>
int main()
{
    int a=0;
    printf("\n Enter Any Number = ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\n Given Number Is Even\n");
    }
    else
    {
        printf("Given Number Is Odd\n");
    }
    getch();
}
