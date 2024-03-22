"""
Q) Rearrange array such that even positioned are greater than odd
"""
def rearrange_array(arr):
    result=[0]*len(arr)
    arr.sort()
    oddIndex=0
    evenIndex=len(arr)-1
    for i in range(len(arr)):
        if i%2==0:
            result[i]=arr[evenIndex]
            evenIndex-=1
        else:
            result[i]=arr[oddIndex]
            oddIndex+=1
    print(result)
limit=int(input())
l=[int(input()) for i in range(limit)]
print("Before rearrangement:", l)
rearrange_array(l)