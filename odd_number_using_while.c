#include<stdio.h>
int main()
{
    int j=1,number;
    printf("Enter the number Where to you Want print odd number=");
    scanf("%d",&number);
    while(j+=2,j<=number){
        printf("\n%d",j);

    }
    return 0;
}
