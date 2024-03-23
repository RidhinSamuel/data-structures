def bubbleSort(a,n):
    print("Sorting....")
    for i in range(n):
        for j in range(n-1-i):
            if a[j] > a[j+1]:
                a[j],a[j+1]=a[j+1],a[j]
        print(a)  #To display the sorted array after each pass of loop.

limit=int(input("Enter the limit "))
arr=[int(input()) for _ in range(limit)]
print("Before Sort arr:- ",arr)
bubbleSort(arr,limit)
