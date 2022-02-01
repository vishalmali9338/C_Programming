#include<stdio.h>

int main()
{
    char ch ;

    printf ("\n Enter Any Character ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
    printf("\n %c Character is Alfabeticals \n",ch);
    }
    if(ch>='0' && ch<='9')
    {
    printf("\n %c Character is Number \n",ch);
    }
    else
    {
        printf("\n Character is Special Character \n");
    }

}


