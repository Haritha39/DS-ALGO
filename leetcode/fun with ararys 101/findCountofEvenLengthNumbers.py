# Find Numbers with Even Number of Digits

# Given an array nums of integers, return how many of them contain an even number of digits.
count = 0
nums = [12,345,2,6,789]
for i in nums:
    float_div_val = i/2
    if i > 9 and float_div_val == int(float_div_val): # same as i//2
        count = count + 1
print(count)