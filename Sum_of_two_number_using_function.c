#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int c,b,a;
     printf("Enter the two number=");
    scanf("%d\n%d",&a,&b);
    c=a+b;
    printf("%d",c);
}
