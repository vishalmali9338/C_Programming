#include<stdio.h>

int main()
{
    int By_Price=0,Sale_Price=0;

    printf("\n Enter Bying Price & Sales Price ");
    scanf("%d%d",&By_Price,&Sale_Price);

    if(By_Price<Sale_Price)
    {
        printf("\n You get Profit");
    }
    else
    {
        printf("\n You Get Loss");
    }
}
