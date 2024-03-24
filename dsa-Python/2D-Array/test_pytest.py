from matrixAddition import addTwoMatrixes
from matrixTranspose import transpose
from matrixMultiplication import multiplyMatrices
def test_addTwoMatrixes():
    # Test case 1
    mat1 = [[1, 2], [3, 4]]
    mat2 = [[5, 6], [7, 8]]
    expected_result = [[6, 8], [10, 12]]
    assert addTwoMatrixes(mat1, mat2, 2, 2) == expected_result

    # Test case 2
    mat3 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    mat4 = [[9, 8, 7], [6, 5, 4], [3, 2, 1]]
    expected_result_2 = [[10, 10, 10], [10, 10, 10], [10, 10, 10]]
    assert addTwoMatrixes(mat3, mat4, 3, 3) == expected_result_2

def test_transpose():
    #Test Case 1
    mat1=[[1,2,3,4],[6,7,8,9]]
    expected_result=[[1,6],[2,7], [3,8], [4,9]]
    assert transpose(mat1,2,4)==expected_result

def test_multiplyMatrices():
    mat1=[[1, 2, 3],[4, 5, 6],[7, 8, 9]]
    mat2 = [[9, 8, 7],[6, 5, 4],[3, 2, 1]]
    expected_result=[[30, 24, 18],[84, 69, 54],[138, 114, 90]]
    assert multiplyMatrices(mat1,mat2,3,3,3,3)==expected_result