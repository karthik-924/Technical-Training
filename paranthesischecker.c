#include<stdio.h>
int main(){
    int row,column,i,j;
    scanf("%d %d",&row,&column);
    int mat[row][column];
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");
    for(i=row-1;i>=0;i--){
        for(j=column-1;j>=0;j--){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<row;i++){
        for(j=column-1;j>=0;j--){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=row-1;i>=0;i--){
        for(j=0;j<column;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}