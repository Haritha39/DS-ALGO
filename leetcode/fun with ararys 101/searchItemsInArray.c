// Given an array arr of integers, check if there exist two indices i and j such that :

// i != j
// 0 <= i, j < arr.length
// arr[i] == 2 * arr[j]

#include<stdbool.h>
bool checkIfExist(int* arr, int arrSize) {
    //Pre checks
    if(arrSize <2 || arrSize > 500){
        return false;
    }
    //USING TWO LOOPS - 6s
    // for(int i=0; i< arrSize; i++){
    //     for(int j=i+1;j<arrSize;j++){
    //         if((i != j) && ((arr[i] == 2*arr[j]) || (arr[j] == 2*arr[i]))){
    //             printf("i %d == j %d\n",arr[i], arr[j]);
    //             printf("i %d == j %d\n",i, j);
    //             return true;
    //         }
    //     } 
    // }
    // return false;
    
    // OPTIMIZED SOLUTION - 0MS
    for(int i=0; i< arrSize; i++){
        if(arr[i]%2 == 0){
            for(int j=0; j<arrSize; j++) {
                if((i != j) && (arr[i] == 2*arr[j])){
                    return true;
                }
            } 
        }
    }
    return false;
}