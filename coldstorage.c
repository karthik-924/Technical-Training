#include<stdio.h>
int main(){
    int n,i,counttemp=0;
    scanf("%d",&n);
    int temp[n];
    for(i=0;i<n;i++){
        scanf("%d",&temp[i]);
        if(temp[i]<0)
        counttemp+=1;
    }
    printf("%d\n",counttemp);
}