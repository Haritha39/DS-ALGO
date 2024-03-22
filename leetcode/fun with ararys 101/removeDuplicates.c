int removeDuplicates(int* nums, int numsSize) {
    // First approach - using two loops
//     int count = 0;
//     int *temp_Arr = (int *)malloc(sizeof(int)*numsSize);
    
//     if(numsSize > 0){
//         temp_Arr[0] = nums[0];
//         count++;
//     } else {
//         return numsSize;
//     }
//     for(int i=1, j=1;i<numsSize; i++) {
//         if(nums[i] != temp_Arr[j-1]){
//             temp_Arr[j] = nums[i];
//             j++;
//             count++;
//         }
//     }
//     for(int i=0;i<count;i++){
//         nums[i] = temp_Arr[i];
//     }
//     return count;
    
    // Second Approach - Comparing values - OPTIMIZED SOLUTION
    if(numsSize == 0){
        return numsSize;
    }
    int left = 0;
    for(int right=0; right < numsSize ; right++){
        if(nums[left] != nums[right]) {
            nums[left+1] = nums[right];
            left++;
        }
    }
    return left+1;
}