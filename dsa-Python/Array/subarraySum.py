"""Given an array arr[] of 
non-negative integers and an integer sum, 
find a subarray that adds to a given sum.
Note: There may be more than one subarray with 
sum as the given sum, print first such subarray."""
def find_subarray(a,n,k):
    s=a[0]
    left=0
    right=0
    maxLen=0
    while right<n:
        while s>k and left<=right:
            s-=a[left]
            left+=1
        if s==k:
            maxLen=max(right-left+1,maxLen)
        right+=1
        if right< n:
            s+=a[right]
    return maxLen


limit=int(input())
l=[int(input()) for _ in range(limit)]
s=int(input())
print("List is  ",l)
print("k is ",s)
print(find_subarray(l,limit,s))