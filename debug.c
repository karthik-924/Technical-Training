#include<stdio.h>
int main(){
    int numA,numB,numC,mul1,mul2,mul3;
    scanf("%d %d %d",&numA,&numB,&numC);
    mul1=numA*numB;
    mul2=numB*numC;
    mul3=numA*numC;
    if(mul1>mul2 && mul1>mul3)
    printf("%d\n",mul1);
    else if(mul2>mul1 &&mul2>mul3)
    printf("%d\n",mul2);
    else
    printf("%d\n",mul3);
}