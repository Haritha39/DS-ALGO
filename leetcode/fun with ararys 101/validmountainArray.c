// Given an array of integers arr, return true if and only if it is a valid mountain array.

// Recall that arr is a mountain array if and only if:

// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
#include<stdbool.h>
bool validMountainArray(int* arr, int arrSize){
    if(arr == NULL || arrSize <3){
        return false;
    }
    int left=0;
    int right=arrSize-1;
    for(int i=0; i<arrSize; i++){
        if(left == right){
            break;
        }
        if(arr[left] < arr[left+1]){
            left++;
        }
        if(arr[right-1] > arr[right]){
            right--;
        }
    }
    if((left == right) && (left != arrSize-1 && right != 0)){
        return true;
    }
    return false;
}