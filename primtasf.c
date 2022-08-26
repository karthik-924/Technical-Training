#include<stdio.h>
#include<stdlib.h>
int * prime(int n,int *c,int *s){
    int i,j,ac=2,flag=1;
    
    for(i=2;i<=n;i++){
        flag=0;
        for(j=2;j<i;j++){
            if (i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            (*c+=1);
            s[*c]=i;
        }
    }
    return s;
}
int main(){
    char s[100];
    int a,*b,c=-1,i,d[100];
    scanf("%s",s);
    a=atoi(s);
    b=prime(a,&c,&d);
    for(i=0;i<=c;i++)
    printf("%d ",b[i]);
}