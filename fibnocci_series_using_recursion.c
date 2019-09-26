#include<stdio.h>
int fibnocci(int);
void main()
{
    int n,f;
    printf("Enter the length of fibnocci series");
    scanf("%d",&n);
    f=fibnocci(n);

    printf("Fibnocci series is :%d",f);
}
int fibnocci(int n)
{
    int f;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
            printf("%d\n",f);
        return fibnocci(n-1)+fibnocci(n-2);

    }
}
