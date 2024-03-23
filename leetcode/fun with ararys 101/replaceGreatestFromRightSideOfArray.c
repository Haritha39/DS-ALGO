/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//FIRST AND BRUTE FORCE APPROACH
// int getMaxValueIndex(int *arr, int arrSize, int i){
//     int max = i+1;
//     for(int j=i+1; j<arrSize; j++){
//         if(arr[j] >= arr[max]){
//             max = j;
//         }
//     }
//     return max;
// }
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    *returnSize = arrSize;
    if(arr == NULL || arrSize == 0){
        return arr;
    }
    if( arrSize == 1){
        arr[0] = -1;
        return arr;
    }
    
    //FIRST AND BRUTE FORCE APPROACH
    // int max_index = 0;
    // for(int i=0; i<arrSize; i++){
    //     if( i == arrSize-1){
    //         arr[i] = -1;
    //         break;
    //     }
    //     if(max_index == i) {
    //         max_index = getMaxValueIndex(arr, arrSize, i);
    //     }
    //     arr[i] = arr[max_index];
    // }
    // return arr;
    
    //OPTIMIZED APPROACH INSPIRED FROM OTHER ANSWWERS
    int max = -1;
    for(int i= arrSize-1;i>=0;i--){
        int temp;
        temp = arr[i];
        arr[i] = max;
        if(temp > max){
            max = temp;
        }
    }
    return arr;
}