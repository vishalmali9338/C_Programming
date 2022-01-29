#include<stdio.h>

int main()
{
    char ch ;

    printf ("\n Enter Any Character ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')

    {
    printf("\n %c Character is Alphabet \n",ch);
    }
    else
    {
    printf("\n %c Character is Not Alphabet \n",ch);
    }
}
