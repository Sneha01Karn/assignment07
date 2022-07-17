#include<stdio.h>
#include<conio.h>
int main()
{
   int x;
   printf("Enter a number:");
   scanf("%d",&x);
   if(x>99 && x<1000)
    printf("Three digit number");
   else
    printf("Not a three digit number");
   getch();
}
