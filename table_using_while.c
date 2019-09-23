#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,number=0;
    printf("Enter the number=");
    scanf("%d",&number);
    while(i<=10){
        printf("\n%d*%d=%d",number,i,number*i);
        i++;
    }
    return 0;
}
