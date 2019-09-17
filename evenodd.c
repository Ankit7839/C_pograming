#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x%2==0)
        printf("it is Even");
    else
        printf("it is Odd");
    getch();
}
