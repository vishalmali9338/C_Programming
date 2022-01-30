#include<stdio.h>

int main()
{
    char ch ;

    printf ("\n Enter Any Character ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' )
    {
    printf("\n %c Character is Lower Case \n",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
    printf("\n %c Character is Upper Case \n",ch);
    }


}



