#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int main(){
    int numsSize, target, returnSize;
    printf("Enter the number of elements:");
    scanf("%d", &numsSize);
    int *nums = (int *)malloc(numsSize*sizeof(int));
    printf("Enter the array elements:\n");
    for(int i=0; i<numsSize; i++){
        scanf("%d", nums+i);
    }
    printf("Enter the target element :\n");
    scanf("%d", &target);
    int *result = twoSum(nums, numsSize, target, &returnSize);
    if (returnSize == 2) {
    printf("Indices: %d, %d\n", result[0], result[1]);
} else {
    printf("No solution found\n");
}

    return 0;
}
int *twoSum(int *nums, int numsSize, int target, int *returnSize){
    for(int i=0; i<numsSize-1; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]+nums[j]==target){
                int *result = (int*)malloc(2*sizeof(int));
                result[0]=i;
                result[1]=j;
                *returnSize=2;
                return result;
            }
        }
    }
    *returnSize=0;
    return NULL;
}