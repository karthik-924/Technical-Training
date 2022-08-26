#include<stdio.h>
int main(){
    int minrange,maxrange,maxprime=-1,minprime,i,j,flag=1,temp;
    scanf("%d %d",&minrange,&maxrange);
    int primes[maxrange];
    for(i=minrange;i<maxrange;i++){
        flag=1;
        temp=abs(i);
    for(j=2;j<temp;j++){
        if(temp%j==0){
        flag=0;
        break;
        }
    }
    if(flag==1 && temp!=1 && temp!=0){
        maxprime+=1;
        if(i<0)
        primes[maxprime]=-temp;
        else
        primes[maxprime]=temp;
    }
    }
     printf("%d \n",abs(primes[0]+primes[maxprime]));
    
}