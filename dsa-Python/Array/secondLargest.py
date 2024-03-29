limit=int(input("Enter the limit of array "))
l=[int(input()) for _ in range(limit)]
big=float('-inf');big2=float('-inf')
for i in l:
    if i > big:
        big2=big
        big=i
    elif i>big2 and i<big:
        big2=i
print(f"Largest element 1.{big} 2.{big2}")