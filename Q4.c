#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n/2*2==n)
        printf("Even");
    else
        printf("odd");
    getch();
}
