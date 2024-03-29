limit=int(input("Enter the limit of array "))
l=[int(input()) for _ in range(limit)]
big=float('-inf');big2=float('-inf')
left=0;right=1
while right < limit:
    if l[left]!=l[right]:
        left+=1
        l[left]=l[right]
    right+=1
print(l[0:left+1])