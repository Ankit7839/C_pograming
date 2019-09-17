#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,m;
    printf("Enter the value of n=");
    scanf("%d",&n);
    m=n;
    while(m>2){
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
                if(j==n/2)
            printf("@");
        else
            printf(" ");
        }
        printf("\n");
        }
    for(i=0;i<=m/2;i++){
        for(j=0;j<=n;j++){

            if(j>=(n/2)-(m/2)+i && j<=(n/2)+(m/2)-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }m=m-2;
    }

}

