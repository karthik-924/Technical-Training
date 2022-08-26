#include<stdio.h>
int main(){
    int n,i,positive=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]>=0)
    positive+=1;
    }
    printf("%d\n",positive);
}