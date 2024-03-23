from matrixAddition import * 
def transpose(mat,row,col):
    result=[]
    for i in range(col):
        result_row=[]
        for j in range(row):
            result_row.append(mat[j][i])
        result.append(result_row)
    return result
    

if __name__=="__main__":
    row=int(input("Enter the number of rows"))
    col=int(input("Enter the number of col"))
    mat=readMatrix(row,col)
    print("\nThe entered Matrix is:")
    display(mat,row,col)
    trans=transpose(mat,row,col)
    print("\nTransposed Matrix is:"+'\n')
    display(trans,col,row)