def countDigitsRecursion(num:int):
    if num<1:
        return 0
    return 1+countDigitsRecursion(num//10)
def countDigitsWhile(num):
    count=0
    while (num>0):
        count+=1
        num=num//10
    return count
num=int(input())
print(countDigitsRecursion(abs(num)))
print(countDigitsWhile(abs(num)))