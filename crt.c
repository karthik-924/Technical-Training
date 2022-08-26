#include<stdio.h>
#include<string.h>
int main(){
    char s[100],a[30],b='a';
    int i,c[30],d=0,k,j,l,count=0;
    scanf("%s",s);
    for (i=0;i<26;i++){
        a[i]=b+i;
        c[i]=0;
    }
    for(k=0;k<26;k++){
    for(j=0;j<strlen(s);j++){
        if(s[j]==a[k]){
            c[d]+=1;
        }
    }
    d+=1;
    }
    for(i=0;i<d;i++){
    if(c[i]!=0)
    printf("%d ",c[i]);
    }
    return 0;
}
