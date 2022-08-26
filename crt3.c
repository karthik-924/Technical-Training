#include<stdio.h>
int main(){
    int a[100],b[100],n,i,j,c=0,d=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        flag=1;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
            flag=0;
            break;
        }
        }
        if(flag==1||i==j){
        printf("%d ",a[i]);
        }
    }
    
}