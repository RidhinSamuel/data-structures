"""
Leaders in an array
Write a program to print all the LEADERS in the array. 
An element is a leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. 
"""
def findLeaderOptimized(arr,n):
    """
    Time Complexity is O(n)
    """
    maxElement=arr[-1]
    leader=[arr[-1]]
    # Iterate through the given list
    for i in range(n-2,-1,-1):
        if arr[i]>maxElement:
            maxElement=arr[i]
            leader.append(arr[i])
    print(*leader[::-1])
    return 

def findLeader(arr,n):
    """
    Time Complexity is O(n^2)
    """
    for i in range(n):
        flag=1
        for j in  range(i+1, n):
            if (arr[j] > arr[i]) :
                flag = 0
                break
        if flag==1:
            print(arr[i],end=" ")
    return

limit=int(input("Enter the limit "))
l=[int(input()) for _ in range(limit)]
print("Array is  ",l)
print("The leaders  are :")
findLeader(l,limit)
print("\nO(n)",end=" ")
findLeaderOptimized(l,limit)