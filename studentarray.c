#include<stdio.h>
int main(){
    char clg[10],name[50],branch[10];
    int marks[10],i,total=0;
    float percentage;
    scanf("%s %s %s",name,clg,branch)
    for(i=0;i<5;i++){
    scanf("%d",&marks[i]);
    total+=marks[i];
    }
    percentage=total/5;
    printf("Name = %s\nCollege = %s\nBranch = %s\n",name,clg,branch);
    for(i=0;i<5;i++){
        printf("Marks %d=")
    }
}