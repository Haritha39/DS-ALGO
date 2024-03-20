// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.
#include <stdio.h>
void duplicateZeros(int* arr, int arrSize) {
    // TWO APPROACHES 
    // Approach 1. Using New array and 2 loops
    int *result_array = (int *)malloc(arrSize*sizeof(int));
    if(result_array == NULL){
        exit(0);
    }
    for(int i=0,j=0; i<arrSize && j<arrSize;i++,j++){
        if(arr[i] != 0){
            result_array[j] = arr[i];
        } else {
            result_array[j] = 0;
            if((j+1)<arrSize ){
                result_array[j+1] = 0;
            }
            j++;
        }
    }
    for(int i=0;i<arrSize;i++){
        arr[i] = result_array[i];
    }
    free(result_array);
    // Approach 2. Using Right shift arary  - TAKE MORE TIME COMPARE TO FIRST APPROACH
    // int *result_array = (int *)malloc(arrSize*sizeof(int));
    // if(result_array == NULL){
    //     exit(0);
    // }
    // for(int i=0;i+1<arrSize;i++){
    //     if(arr[i] == 0) {
    //         int temp = arr[i+1];
    //         for(int j = i+1; j+1<arrSize;j++){
    //             int swap_temp = arr[j+1];
    //             arr[j+1]= temp;
    //             temp = swap_temp;
    //         }
    //         arr[i+1] = 0;
    //         i++;
    //     }
    // }
    // printf("RESULT\n");
    // for(int i=0;i<arrSize;i++){
    //     printf("%d\t", arr[i]);
    // }
}