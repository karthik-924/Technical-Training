#include<stdio.h>
int main(){
    int a=10,b=20;
    printf("Before a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After a=%d b=%d\n",a,b);

}
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("In function a=%d b=%d\n",*a,*b);
}