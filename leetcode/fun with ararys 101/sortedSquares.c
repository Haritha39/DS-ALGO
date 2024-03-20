// Squares of a Sorted Array

// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int *sortArray(int array[], int array_size);
int* squares(int nums[], int numsSize) {
    int *returnArray = (int *)malloc(numsSize*sizeof(int));
    for( int i = 0; i< numsSize; i++) {
        returnArray[i] = nums[i]*nums[i];
        // printf("test %d\t", returnArray[i]);
    }
    return returnArray;
}
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    printf(" INITIAL ARRAY \t");
    for(int i=0; i< numsSize; i++) {
        printf("%d\t", nums[i]);
    }
    int *squared_array = squares(nums, numsSize);
    printf("\n SQUARED ARRAY ");
    for(int i=0; i< numsSize; i++) {
        printf("%d\t", squared_array[i]);
    }

    int *sorted_array = sortArray(squared_array, numsSize);
    printf("\n SORTED ARRAY ");
    for(int i=0; i< numsSize; i++) {
        printf("%d\t", sorted_array[i]);
    }


    //OPTIMIZED WAY TAKING INPUT ARE SORTED IN NON-DECREASING ORDER 
    int *result_array = (int *)malloc(numsSize*sizeof(int));
    if(result_array == NULL) {
        printf("\n Memory not allocated \n");
        exit(0);
    }
    int left=0;
    int right=numsSize-1;
    for(int i=numsSize-1; i>=0; i--){
        if(abs(nums[left]) < abs(nums[right])){
            result_array[i] = nums[right]*nums[right];
        } else {
            result_array[i] = nums[left]*nums[left];
        }
    }
    printf("\n OPTIMIZED ARRAY ");
    for(int i=0; i< numsSize; i++) {
        printf("%d\t", result_array[i]);
    }
    // free(result_array);
    return sorted_array;
}
//BUBBLE SORT
int *sortArray(int array[], int array_size){
    for(int i=0; i< array_size; i++) {
        for(int j = i+1; j< array_size; j++) {
            if(array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array;
}
void main(){
    int nums[] = {-4,-1,0,3,10};
    int *n = sortedSquares(nums, 5, nums);
    printf("\n N ARRAY \t");
    for(int i=0; i< 5; i++) {
        printf("%d\t", n[i]);
    }
}