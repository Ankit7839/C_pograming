#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double e;
    char t[50];
    scanf("%d%lf%s",&j,&e,&t);
    scanf(" %[^\n]s",&t);
    printf("%d\n",(i+j));
    printf("%0.1f\n",(d+e));
    printf("%s%s",s,t);


    return 0;
}
