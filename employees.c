#include<stdio.h>
#include<stdlib.h>
int main(){
    int numberofemployees,maxdistance,mindistance,i;
    scanf("%d %d %d",&numberofemployees,&mindistance,&maxdistance);
    int employeedistance[numberofemployees],validemployee[numberofemployees];
    for(i=0;i<numberofemployees;i++)
    scanf("%d",&employeedistance[i]);
    for(i=0;i<numberofemployees;i++){
        if(abs(employeedistance[i])>=mindistance && abs(employeedistance[i])<=maxdistance){
            printf("%d ",employeedistance[i]);
        }
    }
}