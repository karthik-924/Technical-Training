#include<stdio.h>
int main()
{
    char *r=NULL;
    char *t=0;
    if(r)
    printf("%dr",&r);
    else
    printf("%dnullr",&r);
    if(t)
    printf("%dt",&t);
    else
    printf("%dnullt",&t);
}