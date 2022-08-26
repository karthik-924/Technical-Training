#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int billamounts,length,oddsum=0,evensum=0,i;
    char strbillam[999];
    scanf("%d",&billamounts);
    sprintf(strbillam,"%d",billamounts);
    length=strlen(strbillam);
    for(i=0;i<length;i++){
        if(i%2==0)
        evensum+=(strbillam[i]-'0');
        else
        oddsum+=(strbillam[i]-'0');
    }
    printf("%d",evensum*oddsum);
}