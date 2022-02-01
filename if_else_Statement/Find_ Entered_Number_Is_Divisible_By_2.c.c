#include<stdio.h>
int main()
{
    int num=0,result=0,i=0;

    printf("Enter Any Number ");
    scanf("%d",&num);

    while(i<=num)
    {
         i++;
        if(num%3==1)
        {
            continue;
        }
        else
        {
           printf("\ Divisible Number is",num);
        }

    }



}
