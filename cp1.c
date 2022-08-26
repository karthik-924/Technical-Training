#include<stdio.h>
int main()
{
    int size,numk=3,inputList[15],i,countElement=0;
    printf("Enter size:");
    scanf("%d",&size);
    printf("Enter list elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&inputList[i]);
    }
    for(i=0;i<size;i++){
        if(inputList[i]>(numk*2))
        countElement+=1;
    }
    printf("countElement=%d\n",countElement);
}