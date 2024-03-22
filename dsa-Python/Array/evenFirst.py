"""Segregate even and odd numbers.Even should come first
then odd number"""
def  segregate_even_odds(arr):
    result=[0]*len(arr)
    l=0;r=0
    while (r<len(arr)):
        if arr[r]%2==0:
            arr[l],arr[r]=arr[r],arr[l]
            l+=1; r+=1
        r+=1
        print(arr)
limit=int(input())
l=[int(input()) for i in range (limit)]
print(l)
segregate_even_odds(l)