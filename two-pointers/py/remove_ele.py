def remove_element(nums, val):
    if(len(nums) == 0):
        return 0

    i = 0
    while i < len(nums):
        if(nums[i] == val):
            nums.pop(i)
        else:
            i += 1
    
    return len(nums)
    
    
nums = [0, 1, 2, 2, 3, 0, 4, 2]
val = 2

print("K:", remove_element(nums, val))
print("Nums:", nums)