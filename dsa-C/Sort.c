#include<stdio.h>
#include<stdlib.h>
int limit,a[50],duplicate[50],choice;
void Display()
{
	printf("\nThe elements are \n");
	for (int i = 0;i < limit;i += 1)
	{
		printf("%d ",a[i]);
	}
}
void Input()
{
	printf("Enter the limit of the array ");
	scanf("%d",&limit);
	for (int i = 0;i < limit;i += 1)
	{
		printf("Enter the element ");
		scanf("%d",&a[i]);
	}
}


/**
 * It compares each element with the next element and swaps them if the next element is smaller
 */
void BubbleSort()
{
	printf("\nBubble sort\n");
	for (int i = 0; i < limit-1;i += 1)
	{
		for (int j = 0;j < limit-1-i;j += 1)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}
}

void InsertionSort()
{	int j=0;
	for (int i = 1;i < limit-1;i += 1)
	{
		int b=a[i];
		for (j =i-1; j>=0; j -= 1)
		{
			if(a[j]>b)
				a[j+1]=a[j];
			else
				break;
		}
		a[j+1]=b;
	}
	
}

void SelectionSort()
{
	for (int i = 0;i < limit-1;i += 1)
	{	
		int min=a[i];
		int loc=i;
		for(int k=i+1;k<limit;k++)
		{
			if (a[k]<min)
			{
				min=a[k];
				loc=k;
			}
		}
		if(loc!=i)
		{
			int temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
		
	}
	
}
int main()
{
	while (1)
	{
		printf("\nMENU\n1 Selection Sort\n2 Insertion Sort\n3 Bubble Sort\n4 Exit\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{
				printf("\nSelection Sort\n");
				Input();
				printf("\nBefore Sort...");
				Display();
				SelectionSort();
				printf("\nAfter Selection Sort\n");
				Display();
				break;
			}
			case 2:{
				printf("\nInsertion Sort\n");
				Input();
				printf("\nBefore Sort...");
				Display();
				InsertionSort();
				printf("\nAfter Insertion Sort\n");
				Display();
				break;
			}
			case 3:{
				printf("\nBubble Sort\n");
				Input();
				printf("\nBefore Sort...");
				Display();
				BubbleSort();
				printf("\nAfter Bubble Sort\n");
				Display();
				break;
			}
			case 4:exit(1);
					break;
			default:printf("ERROR\nTry Again\n");
					break;
		}
	}
	
}
