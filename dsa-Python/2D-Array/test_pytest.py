from matrixAddition import addTwoMatrixes

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
