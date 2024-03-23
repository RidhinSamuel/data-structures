def display(mat,row,col,matrixNo=None):
	print(f"Rows={row} and Col={col} \n\nMatrix ",matrixNo)
	for i in range(row):
		print(*mat[i])
		
def readMatrix(row,col):
    # enter the row in single line with numbers seprated by space
    matrix=[]
    for _ in range(row):
        l=list(map(int,input().split()))
        matrix.append(l)
    return (matrix)
def addTwoMatrixes(mat1,mat2,row,col):
    result=[]
    for i in range(row):
        s=[0]*col
        for  j in range(col):
             s[j]=mat1[i][j]+mat2[i][j]
        result.append(s)
    return result
        
# Driver code

if __name__=='__main__':
    print("Enter the Matrix 1")
    row1=int(input("Enter the number of rows "))
    col1=int(input("Enter the number of columns "))
    mat1=readMatrix(row1,col1)
    print("\n\nDisplaying Matrix 1:")
    display(mat1,row1,col1,1)
    print("\nenter the matrix 2")
    row2=int(input("Enter the rows "))
    col2=int(input("Enter the columns"))
    mat2=readMatrix(row2,col2)
    print("\nDisplaying  Matrix 2:")
    display(mat2,row2,col2,2)
    print("\nSum is ")
    s=addTwoMatrixes(mat1,mat2,row1,col1)
    display(s,row1,col1,"Addition Result")