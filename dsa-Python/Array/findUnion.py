def findUnion(arr1,arr2,n1,n2):
    result=[]
    i=0;j=0
    while i<n1 and j <n2:
        if arr1[i]<arr2[j]:
            if arr1[i] not in result:
                result.append(arr1[i])
            i+=1
        elif arr1[i]>arr2[j]:
            if arr2[j] not in result:
                result.append(arr2[j])
            j+=1
        elif arr1[i]==arr2[j]:
            result.append(arr1[i])
            i+=1
            j+=1
            
    while i<n1:
        if arr1[i] not in result:
            result.append(arr1[i])
        i+=1
    while j<n2:
        if arr2[j] not in result:
             result.append(arr2[j])
        j+=1
    return result
if __name__=="__main__":
    limit1=int(input("Enter the limit of array 1"))
    l1=[int(input()) for _ in range(limit1)]
    limit2=int(input("Enter the limit for array 2"))
    l2=[int(input()) for _ in range(limit2)]
    print("Array 1: ",l1)
    print("Array 2: ",l2)
    print("Union is ",findUnion(l1,l2,limit1,limit2))
    