#include<stdio.h>
int main(){
    int i;
    char s='a';
    for(i=1;i<=26;i++){
        printf("%c has ascii value %d\n",s,s);
        s+=1;
    }
}