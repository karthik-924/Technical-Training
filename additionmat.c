#include<stdio.h>
int main(){
    int row,column,i,j;
    scanf("%d %d",&row,&column);
    int mat1[row][column],mat2[row][column];
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ",mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}