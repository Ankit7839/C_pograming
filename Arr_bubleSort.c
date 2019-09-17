#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,temp;
    int a[100];
    printf("Enter your list size for sort=");
    scanf("%d",&n);
    printf("Enter the element of list=");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

    for(i=0;i<n;i++){
         printf("%d",a[i]);
    }
}
