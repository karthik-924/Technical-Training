#include<stdio.h>
int main(){
    int i=5,j=10;
    int *ptr;
    int **pptr;
    ptr=&i;
    printf("%d\n",ptr);
    pptr=&ptr;
    printf("%d\n",pptr);
    *ptr=3;
    printf("%d i=%d\n",*ptr,i);
    **pptr=7;
    printf("%d i=%d\n",**pptr,i);
    ptr=&j;
    printf("%d\n",ptr);
    **pptr=9;
    printf("%d j=%d\n",**pptr,j);
    *pptr=&i;
    printf("%d i=%d\n",*pptr,pptr);
    *ptr=-2;
    printf("%d\n",*ptr);
    printf("%d\n",i);
    printf("%d\n",j);
}