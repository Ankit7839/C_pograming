#include<stdio.h>
int area();
int main()
{
    int result;

    result=area();
    printf(" area of the side=%d",result);
}
int area()
{
    int a;
    printf("Enter the Side of squre=");
    scanf("%d",&a);

    return(a*a);
}
