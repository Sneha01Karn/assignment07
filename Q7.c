#include<stdio.h>
#include<conio.h>
int main()
{
    float c,s,pp,pl;
    printf("Enter cost price:");
    scanf("%f",&c);
    printf("Enter selling price:");
    scanf("%f",&s);
    if(s>c)
    {
        pp=(s-c)/c*100;
        printf("Percentage profit is %f",pp);
    }
    if(c>s)
    {
        pl=(c-s)/c*100;
        printf("Percentage loss is %f",pl);
    }
    getch();
}
