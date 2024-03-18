from typing import List
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max_ones = 0
        count = 0
        for i in nums:
            if i == 1:
                count = count + 1
            else:
                if count > max_ones:
                    max_ones = count
                count = 0
        if count > max_ones:
            max_ones = count
        return max_ones
                    
        