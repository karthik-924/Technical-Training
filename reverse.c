#include<stdio.h>
int main(){
    int a[10],n=123,i=0,r,s=3;
    char b[10];
    while(n>0){
        r=n%10;
        a[i]=r;
        n/=10;
        printf("%d",a[i]);
        i++;
    }
}