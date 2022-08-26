#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char s[100];
    int len,i;
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++){
        printf("%c",toupper(s[i]));
    }
    printf("\n");
}