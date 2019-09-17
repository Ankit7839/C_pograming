#include<stdio.h>
void main()
{
    int x;
    printf("Enter the year:");
    scanf("%d",&x);
  if(x%4 ==0){
        if(x%100==0)
        {
           if(x%400 ==0)
         {
        printf("Is leap year");
         }
        else
        {
        printf("is not leap year");
        }
        }
    else
    {
        printf("Is leap year");
    }
    }
     else
     {
         printf("Is not leap year");
     }

}
