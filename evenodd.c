#include<stdio.h>
int main(){
    int a[]={1,3,6,8,12},n=5,i;
    for(i=0;i<n;i++){
        if(a[i]%2==0)
        printf("%d is even number\n",a[i]);
        else
        printf("%d is odd number\n",a[i]);
    }
}