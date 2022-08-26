#include<stdio.h>
int main(){
    unsigned long long int n,i,f=1,r,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    f*=i;
    printf("%lld\n",f);
    while(f>0){
        r=f%10;
        if(r==0)
        count+=1;
        f/=10;
    }
    printf("%d",count);
}