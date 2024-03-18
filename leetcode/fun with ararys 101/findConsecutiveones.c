#include <stdio.h>
void findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max_ones = 0;
    int count = 0;
    // THIS IS ANOTHER APPROACH AND IT IS ALSO WORK
    // for(int i = 0; i < numsSize; i++ ){
    //     if(nums[i]) {
    //         max_ones = ++count > max_ones ? count : max_ones;
    //     } else {
    //         count = 0;
    //     }
    // }
    for(int i = 0; i < numsSize; i++ ){
        if(nums[i] == 1) {
            count++;
        } else {
            if(count > max_ones) {
                max_ones = count;
            }
            count = 0;
        }
    }
    if(count > max_ones){
        max_ones = count;
    }
    printf("largest consecutive oness: %d ", max_ones);
}

void main(){
    int nums[] = {1,1,0,1,1,1};
    findMaxConsecutiveOnes(nums, 6);
}