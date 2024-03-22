def reverseNumber(num):
    reverse=0
    while num>0:
        reverse=reverse*10+num%10
        num//=10
    return  reverse
num=int(input())
print(reverseNumber(num))