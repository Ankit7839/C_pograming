#include<stdio.h>
#include<conio.h>
void main()
{
    long long x;
    int count = 0;

    printf("Enter the number:");
    scanf("%lld", &x);

    while(x !=0)
    {
        x /=10;
        count++;
    }
    printf("Number of Digite is %d",count);
    getch();
}
