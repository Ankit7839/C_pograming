#include<stdio.h>
int main()
{
    int i=0,number=0;
    printf("Enter the number=");
    scanf("%d",&number);
    for(i=1;i<=10;i++){
        printf("\n%d*%d=%d",number,i,number*i);
    }
    return 0;
}
