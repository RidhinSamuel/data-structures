limit=int(input())
count=1
for i in range(1,limit+1):
    print(" "*(limit-i),end="")
    for j in range(0,count//2+1):
        print(chr(ord('A')+j),end="")
    for j in range((count//2)-1,-1,-1):
        print(chr(ord('A')+j),end="")
    print()
    count+=2