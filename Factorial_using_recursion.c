#include<stdio.h>
int fact(int);
void main()
{
    int n,f;
    printf("Enter the number :");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of the number is :%d",f);
}
int fact(n)
{
    if(n==0){
        return 0;
    }
        else if(n==1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }
