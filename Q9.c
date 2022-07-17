#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a character:");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
        printf("Uppercase");
    if(x>='a' && x<='z')
        printf("Lowercase");
    getch();
}
