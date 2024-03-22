"""
DOCSTRING
Q) Move All zeroes to end of an array
"""
def  moveZeroes(nums):
    l=r=0
    while r<len(nums):
        if  nums[r]!=0:
            nums[l],nums[r]=nums[r],nums[l]
            r+=1
            l+=1
        r+=1
    print(nums)
    return
limit=int(input())
l=[int(input()) for i in range(limit)]
print(l)
moveZeroes(l)