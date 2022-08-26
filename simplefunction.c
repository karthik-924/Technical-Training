#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a,b:");
    scanf("%d %d",&a,&b);
    sum(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    mod(a,b);
    return 0;
}
void sum(int a,int b){
    printf("Sum=%d\n",(a+b));
}
void sub(int a,int b){
    printf("sub=%d\n",(a-b));
}
void mul(int a,int b){
    printf("Mul=%d\n",(a*b));
}
void div(int a,int b){
    printf("Div=%d\n",(a/b));
}
void mod(int a,int b){
    printf("Mod=%d\n",(a%b));
}