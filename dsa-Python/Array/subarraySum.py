"""Given an array arr[] of 
non-negative integers and an integer sum, 
find a subarray that adds to a given sum.
Note: There may be more than one subarray with 
sum as the given sum, print first such subarray."""
def find_subarray(a,n,k):
    s=a[0]
    left=0
    right=1
    while right<n:
        s+=a[right]
        while s>k and left<n:
            s-=a[left]
            left+=1
        if s==k:
            print(left,right)
        right+=1
    return


limit=int(input())
l=[int(input()) for _ in range(limit)]
s=int(input())
print("List is  ",l)
find_subarray(l,limit,s)