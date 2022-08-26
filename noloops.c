#include<stdio.h>
int main(){
    int n,i=1;
    scanf("%d",&n);
    func(n,i);
    return 0;
}

func(int n,int i){
    if(i==n+1)
    return;
    else{
    printf("%d\n",i);
    func(n,i+=1);
    }
}