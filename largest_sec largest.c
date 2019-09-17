#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,largest,sec_largest;
    printf("Inter the size of array=");
    scanf("%d",&n);
    printf("Enter the element of array=");
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    largest=a[0];
    sec_largest=a[1];
    for(i=0;i<=n;i++){
        if(a[i]>largest){
            sec_largest=largest;
            largest=a[i];
        }
        else if(a[i]>sec_largest && a[i]!=largest){
            sec_largest=a[i];
        }
    }
printf("largest= %d sec_largest= %d",largest,sec_largest);
}
