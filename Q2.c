#include<stdio.h>
#include<conio.h>
int main()
{
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x%5)
{
    printf("Not divisible");
}
else
{
    printf("Divisible");
}
getch();
}
