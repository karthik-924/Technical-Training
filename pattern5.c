#include<stdio.h>
int main(){
    int i,j,n,c=1,d[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j+=2)
        printf("--");
        for(j=0;j<=i;j++){
            printf("%d*",c);
            c++;
        }
        printf("\n");
        }
    }