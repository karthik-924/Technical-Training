#include<stdio.h>
int main()
{
int a=10,b=10;
if(a==b&&a>=b)
printf("True1");
else
printf("False1");
if(a<=b||a!=b)
printf("True2");
else
printf("False2");
if(!(a>b))
printf("True3");
else
printf("False3");
if(!(a<b))
printf("True4");
else
printf("False");
}
