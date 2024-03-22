#include<stdio.h>
int a[50][50],b[50][50],nonzero_a,nonzero_b;
void disaplay(int a[50][50],int row,int col)
{  // printf(" the Matrix is \n");
	//printf("\n ROW :%d COL:%d\n",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf(" %d ",a[i][j]);
            
            
        }
        printf("\n");
        
    }
    
}
void triplet(int a[50][50],int row,int col,int b[50][50],int *nonzero)
{	
	for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           if (a[i][j]!=0)
           {
           		*nonzero+=1;
           		b[*nonzero][0]=i;
           		b[*nonzero][1]=j;
           		b[*nonzero][2]=a[i][j];
           		
           }  
        }  
    }
    b[0][0]=row;
    b[0][1]=col;
    b[0][2]=*nonzero;
}
void main()
{	//int row,col;
	int row=4,col=3,sum[50][50];
	int A[50][50]={{0,0,1},{3,0,0},{0,4,0},{5,0,0}};
	int B[50][50]={{1,0,0},{1,0,2},{0,4,0},{0,0,2}};
	printf("Matrix A is \n");
	disaplay(A,row,col);
	printf("Matrix B is \n");
	disaplay(B,row,col);
	printf("Triplet OF A is \n");
	triplet(A,row,col,a,&nonzero_a);
	disaplay(a,nonzero_a+1,col);
	printf("Triplet OF B is \n");
	triplet(B,row,col,b,&nonzero_b);
	disaplay(b,nonzero_b+1,col);
	
	int row_a=nonzero_a+1;
	int row_b=nonzero_b+1;
	//printf("NON zero in A:%d B:%d \n",nonzero_a,nonzero_b);
	if(a[0][0]!=b[0][0] && b[0][1]!=a[0][1])
	{
		printf("Addition is not possible ");
	}
	int ka=1,kb=1,ksum=1;
	while (ka<=nonzero_a && kb<=nonzero_b)
	{
		if (a[ka][0]==b[kb][0])
		{
			if (a[ka][1]<b[kb][1])
			{
				sum[ksum][0]=a[ka][0];
				sum[ksum][1]=a[ka][1];
				sum[ksum][2]=a[ka][2];
				ksum++;
				ka++;
			}
			else if (a[ka][1]>b[kb][1])
			{	
				sum[ksum][0]=b[kb][0];
				sum[ksum][1]=b[kb][1];
				sum[ksum][2]=b[kb][2];
				kb++;
				ksum++;
			}
			else
			{
				sum[ksum][0]=a[ka][0];
				sum[ksum][1]=a[ka][1];
				sum[ksum][2]=a[ka][2]+b[ka][2];
				ksum++;
				kb++;
				ka++;
				
			}
		}
		else if (a[ka][0]<b[kb][0])
		{
				sum[ksum][0]=a[ka][0];
				sum[ksum][1]=a[ka][1];
				sum[ksum][2]=a[ka][2];
				ksum++;
				ka++;
		}
		else if (a[ka][0]>b[kb][0])
		{
				sum[ksum][0]=b[kb][0];
				sum[ksum][1]=b[kb][1];
				sum[ksum][2]=b[kb][2];
				kb++;
				ksum++;
		}
		else{
			continue;}
	}
	while (ka<=nonzero_a)
	{
				sum[ksum][0]=a[ka][0];
				sum[ksum][1]=a[ka][1];
				sum[ksum][2]=a[ka][2];
				ksum++;
				ka++;
	}
	while (kb<=nonzero_b)
	{
				sum[ksum][0]=b[kb][0];
				sum[ksum][1]=b[kb][1];
				sum[ksum][2]=b[kb][2];
				kb++;
				ksum++;
	}
	sum[0][0]=a[0][0];
	sum[0][1]=a[0][1];
	sum[0][2]=ksum-1;
	printf("Sum is \n");
	disaplay(sum,sum[0][2]+1,3);
	
}
