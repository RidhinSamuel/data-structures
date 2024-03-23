def display(mat,row,col):
	print(f"Rows={row} and Col={col} \n\nMatrix is ")
	for i in range(row):
		print(*mat[i])
		

row=int(input("Enter the number of rows "))
col=int(input("Enter the number of columns "))
matrix=[]
for i in range(row):
    # enter the row in single line with numbers seprated by space
	l=list(map(int,input().split()))
	matrix.append(l)
print("Matrix is ")
display(matrix,row,col)

