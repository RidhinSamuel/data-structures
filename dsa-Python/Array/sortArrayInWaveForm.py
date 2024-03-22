"""first element is larger than the second and the same thing is repeated again and again. large element – small element-large element -small element and so on """
def sortArrayWaveForm(arr):
    #arr.sort()
    #result=[0]*len(arr)
    for i in range(len(arr)-1):
        if (i%2==0 and arr[i]<arr[i+1]) or (i%2!=0 and arr[i]>arr[i+1]):
            arr[i], arr[i+1]=arr[i+1],arr[i]
    return arr
l=int(input("Enter the limit "))
a=[int(input())for i in range(l)]
print("Before Sorting ",a)
print("After Sorting ",sortArrayWaveForm(a))