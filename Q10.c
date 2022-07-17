#include<stdio.h>
#include<conio.h>
int main()
{
    int age,P,A;
    printf("Enter the age of client:");
    scanf("%d",&age);
    printf("Enter the investment amount:");
    scanf("%d",&P);
    if(age>=18 && age<25)
    {
        A=(P*5*30)/100+P;
        printf("Maturity amount=%d",A);
    }
    if(age>=25 && age<40)
    {
        A=(P*5*20)/100+P;
        printf("Maturity amount=%d",A);
    }
    if(age>=40 && age<55)
    {
        A=(P*5*10)/100+P;
        printf("Maturity amount=%d",A);
    }
    getch();
}
