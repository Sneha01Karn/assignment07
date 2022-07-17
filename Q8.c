#include<stdio.h>
#include<conio.h>
int main()
{
    float s1,s2,s3,s4,s5,T;
    printf("Enter marks obtained in Subject1:");
    scanf("%f",&s1);
    printf("Enter marks obtained in Subject2:");
    scanf("%f",&s2);
    printf("Enter marks obtained in Subject3:");
    scanf("%f",&s3);
    printf("Enter marks obtained in Subject4:");
    scanf("%f",&s4);
    printf("Enter marks obtained in Subject5:");
    scanf("%f",&s5);
    T=s1+s2+s3+s4+s5;
    T=T/500.0*100;
    if(T>=33.0 && T<=100.0)
        printf("Passed");
    else
        printf("Failed");
    getch();
}
