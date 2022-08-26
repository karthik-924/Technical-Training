#include<stdio.h>
#include<string.h>
int main(){
    char input[100],numbers[]="0123456789";
    int length,i,j,numlen,k,flag=1;
    gets(input);
    length=strlen(input);
    numlen=strlen(numbers);
    for(i=0;i<length;i++){
        for(j=0;j<numlen;j++){
            if(input[i]==numbers[j])
            printf("%c ",input[i]);
        }
    }
        printf("\n");
    for(i=0;i<length;i++){
        flag=1;
        for(j=0;j<numlen;j++){
            if(input[i]==numbers[j]){
            flag=0;
            break;
            }
        }
        if(flag==1&&input[i]!=" ")
        printf("%c",input[i]);
    }
    }