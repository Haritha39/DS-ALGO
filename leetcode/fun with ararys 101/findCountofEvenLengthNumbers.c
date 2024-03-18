// Find Numbers with Even Number of Digits

// Given an array nums of integers, return how many of them contain an even number of digits.
int findNumbers(int* nums, int numsSize) {
    int count  = 0;
    // MY FIRST APPROACH BUT IT IS TAKING MORE CPU TIME
    // for(int i = 0; i < numsSize; i++) {
    //     char convert_string[1000000];
    //     sprintf(convert_string, "%d",nums[i]);
    //     if(strlen(convert_string)%2 == 0) {
    //         count++;
    //     }
    // }
    
    //OPTIMIZED
    for(int i = 0; i< numsSize; i++){
        int num = nums[i];
        int quotient_count = 0;
        while(num > 0){
            num = num /10;
            quotient_count++;
        }
        if( quotient_count % 2 == 0){
            count++;
        }
    }
    return count;
}