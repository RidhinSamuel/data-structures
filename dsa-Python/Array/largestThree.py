limit=int(input())
l=[]
for i in range(limit):
	a=int(input())
	l.append(a)
one=float('inf')
two=float('inf')
three=float('inf')
for i in l:
	if i>one:
		three=two
		two=one
		one=i
	elif i>two:
		three=two
		two=i
	elif i>three:
		three=i
print(*l)
print("Largest 3 Elements are ",one,two,three)
