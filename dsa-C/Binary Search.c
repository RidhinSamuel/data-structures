#include<stdio.h>
#include<stdlib.h>
int array[50],limit,number,found=0,duplicate[50];
void display(int A[50])
{
	printf("\nthe ARRAY is\n");
	for (int i = 0; i < limit; i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	
}

void input()
{
	printf("\nEnter the limit of the ARRAY");
	scanf("%d",&limit);
	for (int i = 0; i < limit; i++)
	{
		printf("Enter the element ");
		scanf("%d",&array[i]);
		duplicate[i]=array[i];
	}
	display(array);
}
void bubbleSort()
{
	printf("\nSORTING....");
	for (int i = 0; i < limit-1; i += 1)
	{
		for (int j = 0; j < limit-1-i; j += 1)
		{	if (duplicate[j]>duplicate[j+1])
			{		
				int temp=duplicate[j];
				duplicate[j]=duplicate[j+1];
				duplicate[j+1]=temp;
			
			}
			
		}
	}
	display(duplicate);
}
void binarySearch()
{	bubbleSort();
	printf("\nEnter the element to find ");
	scanf("%d",&number);
	int mid,lower=0,upper=limit-1;
	while (lower<=upper)
	{	//printf("\nInside the loop");
		mid=(upper+lower)/2;
		if(duplicate[mid]==number)
		{	found=1;
			printf("\nElement found at %d INDEX\n",mid);
			break;
		}
		else if (number<duplicate[mid])
		{
			upper=mid-1;
		}
		else if (number>duplicate[mid])
		{
			lower=mid+1;
		}
		else
		{
			continue;
		}
	}
	if (found==0)
	{
		printf("Element not found ");
	}
	found=0;
}

void linearSearch()
{
	printf("\nEnter the element to find ");
	scanf("%d",&number);
	for (int i = 0; i < limit; i += 1)
	{
		if(number==array[i])
		{
			printf("\nElement found at %d Index\n",i);
			found=1;
			break;
		}
		
	}
	if(found==0)
	{
		printf("\nElement not found ");
	}	
	found=0;
}

void main()
{
	int choice;
	input();
	printf("Binary Search\n");  //complete
	binarySearch();
	
	
	
	
}

/*Enter the limit of the ARRAY5*/
/*Enter the element 1*/
/*Enter the element 8*/
/*Enter the element 12*/
/*Enter the element 15*/
/*Enter the element 35*/

/*the ARRAY is*/
/*1 8 12 15 35 */
/*Binary Search*/

/*SORTING....*/
/*the ARRAY is*/
/*1 8 12 15 35 */

/*Enter the element to find 15*/

/*Element found at 3 INDEX*/

