#include<stdio.h>
int main(){
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=0;i<n+1;i++){
        for(j=0;j<n;j++){
            if(i==0||i==n||j==0||j==n-1)
            printf("%d ",n);
            else{
            printf("%d ",k);
            k+=1;
            }
        }
        printf("\n");
    }
}