#include <stdio.h>
// It takes an array and a limit as input and stores the elements in the array
void Input(int a[50], int limit)
{
    for (int i = 0; i < limit; i += 1)
    {
        printf("Enter the element ");
        scanf("%d", &a[i]);
    }
}

// It displays the elements of the array
void Display(int a[50], int limit)
{
    for (int i = 0; i < limit; i += 1)
    {
        printf("%d ", a[i]);
    }
}
//It compares each element with the next element and swaps them if the next element is smaller
void BubbleSort(int a[50],int limit)
{
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
        /* Printing the step by step process of the selection sort. */
        printf("STEP %d IS :- ",i+1);
        Display(a,limit);
        printf("\n");	
	}
}
// MAIN
int main()
{
    int limit, array[50], duplicate[50];
    printf("Enter the limit of the array ");
    scanf("%d", &limit);
    Input(array, limit);
    printf("\nThe elements are \n");
    Display(array, limit);
    printf("\nBubbleSort\n");
	BubbleSort(array,limit);
    printf("\nSorted Array is :-");
	Display(array,limit);
    
}
