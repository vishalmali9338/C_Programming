#include<stdio.h>
int main()
{

    float  G_Salary=0,B_salary=0,Hra=0,Da=0;


    printf("\n Enter Basic Salary of Employee ");
    scanf("%f",&B_salary);

    if(B_salary>0)
    {
        if(B_salary>0 && B_salary<=10000)
        {
            Hra=B_salary * 0.2;
            Da=B_salary * 0.80;
            G_Salary=B_salary+Hra+Da;

            printf("\n Base Salary = %f  & Gross Salary = %f ",B_salary,G_Salary);
        }
        else if(B_salary>=10000 && B_salary<=20000)
        {
            Hra=B_salary*0.25;
            Da=B_salary*0.90;
            G_Salary=B_salary+Hra+Da;

            printf("\n Base Salary = %f  & Gross Salary = %f ",B_salary,G_Salary);
        }
        else if(B_salary>20000)
        {
            Hra=B_salary*0.30;
            Da=B_salary*0.95;
            G_Salary=B_salary+Hra+Da;

            printf("\n Base Salary = %f & Gross Salary = %f ",B_salary,G_Salary);
        }
    }
    else
    {
        printf("\n Invalid salary");
    }
}
