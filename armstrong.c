#include<stdio.h>
int main(){
    int a[]={1,153,370},n=3,i;
    for(i=0;i<n;i++){
    if(armstrong(a[i]))
    printf("%d is armstrong\n",a[i]);
    else
    printf("%d is not a armstrong\n",a[i]);
    }
}

int armstrong(int n)
{
    int r,c=0,temp=n;
    while(n>0){
        r=n%10;
        c=c+r*r*r;
        n/=10;
    }
    if(temp==c)
    return 1;
    else
    return 0;
}