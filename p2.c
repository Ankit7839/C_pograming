#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=5 ;i++)
 {
    for(j=1;j<=5 ;j++)
    {
        if(6-i>=j)
          printf("*");
        else
            printf(" ");
    }
    printf("\n");

 }
    getch();
}
