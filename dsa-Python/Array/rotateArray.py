"""Rotate and array K distance to left """
def rotateArrayToLeft(nums, k):
    # Calculate the real rotation distance
    k = k % len(nums)  # If k is larger than the length of given array
    temp=0
    for i in range(k):   # the list, then we need to do k mod
        temp=nums[0]
        for j in range(0,len(nums)-1,1):
            nums[j]=nums[j+1]
        nums[-1]=temp
    return nums

limit=int(input())
l=[int(input()) for i in range(limit)]
k=int(input("Enter the distance "))
print("Before Rotate",l)
print("After Rotate ",rotateArrayToLeft(l,k))