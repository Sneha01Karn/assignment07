#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("%d>%d",a,b);
    if(b>a)
        printf("%d>%d",b,a);
    if(a==b)
        printf("%d",a);
    getch();
}
