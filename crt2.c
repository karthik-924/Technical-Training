#include<stdio.h>
#include<string.h>
int main(){
    int n,a[10],t=9,i,j,b[10],c[10],d=1,e=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<t;i++){
        b[i]=0;
        c[i]=d;
        d+=1;
    }
    for(k=0;k<t;k++){
    for(j=0;j<n;j++){
        if(a[j]==c[k]){
            b[e]+=1;
        }
    }
    e+=1;
    }
    for(i=0;i<t;i++){
    if(b[i]!=0)
    printf("%d ",b[i]);
    }
    return 0;
}
