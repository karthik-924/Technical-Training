#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char string[100];
    scanf("%s",string);
    int length,i,j,finallength,count=0;
    length=strlen(string);
    finallength=0;
    for(i=0;i<length;i++){
        count=0;
        for(j=i+1;j<length;j++){
            if(string[i]==string[j]){
                string[j]=' ';
                count+=1;
            }
        }
        if(count>0)
        string[i]=' ';
    }
    for(i=0;i<length;i++)
    if(string[i]!=' ')
    finallength+=1;
    printf("%d\n",finallength);
}