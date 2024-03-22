/**Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.*/

int removeElement(int* nums, int numsSize, int val) {
    int count = 0;
    int left = 0;
    int right = numsSize-1;
    if(val >50 || numsSize >100){
        return numsSize;
    } else {
        for(int i=0;i< numsSize; i++) {
            if(left > right){
                return count;
            }
            if(nums[i] != val) {
                count++;
                left++;
            } else {
                nums[left] = nums[right];
                right--;
                i--;
               
            }
            
        }
        printf("\n count : %d\tright : %d\tleft : %d\t", count,right,left);
        return count;
    }
    
} 