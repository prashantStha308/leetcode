def removeDuplicates(nums):
    if(len(nums) == 0):
        return 0
    
    j = 0
    for i in range( 1, len(nums)):
        if(nums[i] != nums[i - 1]):
            j+=1
            nums[j] = nums[i]
    
    return j + 1

nums = [0,0,1,1,1,2,2,3,3,4]

k = removeDuplicates(nums)

print(f"k: {k}")
print("Nums:", nums)