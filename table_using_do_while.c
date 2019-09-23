#include<stdio.h>
int main(void)
{
    int i=1,number=0;
    printf("Enter the Number=");
    scanf("%d",&number);
    do{
        printf("\t\n%d*%d=%d",number,i,number*i);
        i++;
    }while(i<=10);
    return 0;
}
