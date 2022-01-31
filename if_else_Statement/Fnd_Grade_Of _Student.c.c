#include<stdio.h>
int main()
{

    int Physics=0,Chemistry=0,Maths=0,English=0,Marathi=0,Total=0;
    float Percentage=0;

    printf("\n Enter Five Subject Marks \n");

    scanf("%d%d%d%d%d",&Physics,&Chemistry,&Maths,&English,&Marathi);

    Total=Physics+Chemistry+Maths+English+Marathi;

    Percentage=Total/5;

    printf("\n Percentage:- %f ",Percentage);

    if(Percentage>=90)
    {
      printf("\n Grade 'A' ");
    }
     else if(Percentage>=80 && Percentage<=80)
    {
        printf("\n Grade 'B' ");
    }
    else if(Percentage>=70 && Percentage<=70)
    {
        printf("\n Grade 'C' ");
    }
    else if(Percentage>=60 && Percentage<=60)
    {
        printf("\n Grade 'D' ");
    }
    else if (Percentage>=40 && Percentage<=40)
    {
        printf("\n Grade 'E' ");
    }
    else if (Percentage<40 )
    {
        printf("\n Grade 'F' ");
    }

    getch();
}

