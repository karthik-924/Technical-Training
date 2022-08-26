#include<stdio.h>
int main(){
    char word1[100],word2[100],temp[10],mirror[100],mirror2[100];
    scanf("%s",word1);
    //scanf("%s",word2);
    int i=0,j=strlen(word1)-1,length=strlen(word1),coun2=0,count3=0,k;
    strcpy(mirror,word1);
    while(i<strlen(word1)){
        coun2=0;
        mirror[j+1]=word1[i];
        mirror[i]=' ';
        i++;
        j++;
        for(k=0;k<strlen(mirror);k++){
        if(mirror[k]!=' '){
        mirror2[coun2]=mirror[k];
        coun2+=1;
        }
        }
        printf("%s\n",mirror2);
        if((strcmp(mirror2,word2))==0){
        printf("%d",1);
        return 0;
        }
        count3+=1;
    }
    if(strcmp(mirror2,word2)==0)
    printf("%d",-1);
}