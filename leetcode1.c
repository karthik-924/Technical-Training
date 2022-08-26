#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                returnSize[0]=i;
                returnSize[1]=j;
            }
        }
    }
    return returnSize;
}
int main(){
    int nums[10]={2,7,11,15},numSize=4,target=9,returnSize[5];
    twoSum(nums,numSize,target,returnSize);
    printf("%d,%d",returnSize[0],returnSize[1]);
    return 0;
}

