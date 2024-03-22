#include <stdio.h>
int a[50][50], b[50][50]; // array to store triplet of original array A and B
int nonzero_a, nonzero_b;
//Read the Matrix
void input(int row, int column, int matrix[50][50])
{
	printf("Enter the number \n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("Row %d column %d  : ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
}

//It prints the matrix.
void display(int matrix[50][50], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %d ", matrix[i][j]);
		}
		printf("\n");
	}
}

void triplet(int array1[50][50], int row, int col, int array2[50][50], int *nonzero)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (array1[i][j] != 0)
			{
				*nonzero += 1;
				array2[*nonzero][0] = i;
				array2[*nonzero][1] = j;
				array2[*nonzero][2] = array1[i][j];
			}
		}
	}
	array2[0][0] = row;
	array2[0][1] = col;
	array2[0][2] = *nonzero;
}

void main()
{ 
	
	int row_A, col_A, row_B, col_B, sum[50][50];		
	int A[50][50], B[50][50];

	/* Taking the input of the matrix A and displaying it. */
	printf("Enter the row and column for Matrix A");
	scanf("%d%d", &row_A, &col_A);
	input(row_A, col_A, A);
	printf("Matrix A is \n");
	display(A, row_A, col_A);

	/* Taking the input of the matrix B and displaying it. */
	printf("Enter the row and column for Matrix B");
	scanf("%d%d", &row_B, &col_B);
	input(row_B, col_B, B);
	printf("Matrix B is \n");
	display(B, row_B, col_B);

	/* Converting the matrix A into triplet form and storing it in the matrix a.
	And printing the matrix a*/
	triplet(A, row_A, col_A, a, &nonzero_a);
	printf("Triplet OF A is \n");
	int row_a = nonzero_a + 1;
	display(a, row_a, 3);

	/* Converting the matrix B into triplet form and storing it in the matrix b.
	And printing the Matrix b */
	triplet(B, row_B, col_B, b, &nonzero_b);
	printf("Triplet OF B is \n");
	int row_b = nonzero_b + 1;
	display(b, row_b, 3);

	if (a[0][0] != b[0][0] && b[0][1] != a[0][1])
	{
		printf("Addition is not possible ");
	}
	int ka = 1, kb = 1, ksum = 1;
	while (ka <= nonzero_a && kb <= nonzero_b)
	{
		if (a[ka][0] == b[kb][0])
		{
			
			if (a[ka][1] < b[kb][1])
			{
				sum[ksum][0] = a[ka][0];
				sum[ksum][1] = a[ka][1];
				sum[ksum][2] = a[ka][2];
				ksum++;
				ka++;
			}
			
			else if (a[ka][1] > b[kb][1])
			{
				sum[ksum][0] = b[kb][0];
				sum[ksum][1] = b[kb][1];
				sum[ksum][2] = b[kb][2];
				kb++;
				ksum++;
			}
			else
			{
				sum[ksum][0] = a[ka][0];
				sum[ksum][1] = a[ka][1];
				sum[ksum][2] = a[ka][2] + b[kb][2];
				ksum++;
				kb++;
				ka++;
			}
		}

		
		else if (a[ka][0] < b[kb][0])
		{
			sum[ksum][0] = a[ka][0];
			sum[ksum][1] = a[ka][1];
			sum[ksum][2] = a[ka][2];
			ksum++;
			ka++;
		}
		
		else if (a[ka][0] > b[kb][0])
		{
			sum[ksum][0] = b[kb][0];
			sum[ksum][1] = b[kb][1];
			sum[ksum][2] = b[kb][2];
			kb++;
			ksum++;
		}
		else
		{
			continue;
		}
	}
	
	while (ka <= nonzero_a)
	{
		sum[ksum][0] = a[ka][0];
		sum[ksum][1] = a[ka][1];
		sum[ksum][2] = a[ka][2];
		ksum++;
		ka++;
	}
	while (kb <= nonzero_b)
	{
		sum[ksum][0] = b[kb][0];
		sum[ksum][1] = b[kb][1];
		sum[ksum][2] = b[kb][2];
		kb++;
		ksum++;
	}
	sum[0][0] = a[0][0];
	sum[0][1] = a[0][1];
	sum[0][2] = ksum - 1;

	/* Printing the sum matrix. */
	printf("Sum is \n");
	display(sum, sum[0][2] + 1, 3);
}
