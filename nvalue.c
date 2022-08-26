#include<stdio.h>
int main(){
    char s[100],a[30],b='a';
    int i;
    scanf("%s",s);
    for (i=1;i<=26;i++){
        a[i]=b+i;
        printf("%c",a[i]);
    }
}
