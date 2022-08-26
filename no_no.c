#include<stdio.h>
int main()
{
    int a=20,b=10,c,d;
    sum();
    sub(a,b);
    c=mul();
    d=div(16,4);
    printf("Mul=%d\n",c);
    printf("Div=%d\n",d);
}
void sum(){
    printf("Sum=%d\n",(10+20));
}
void sub(int a,int b){
    printf("Sub=%d\n",(a-b));
}
int mul(){
    return (5*4);
}
int div(int a,int b){
    return (a/b);
}