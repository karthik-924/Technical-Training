#include<stdio.h>
int main(){
    int a[]={5,10,15},n=3,i;
    for(i=0;i<n;i++)
    printf("Factorial of %d is %d\n",a[i],factorial(a[i]));
}

int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f*=i;
    return f;
}