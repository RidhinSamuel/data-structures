#include <stdio.h>
int limit,b[50],a[50];
// It takes an array and a limit as input and stores the elements in the array
void Input()
{
    for (int i = 0; i < limit; i += 1)
    {
        printf("Enter the element ");
        scanf("%d", &a[i]);
    }
}
// It displays the elements of the array
void Display(int a[50],int limit)
{
    for (int i = 0; i < limit; i += 1)
    {
        printf("%d ", a[i]);
    }
}
void Merge(int low,int mid,int high)
{
	int i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			k++;
			i++;
		}
		else
		{
			b[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		b[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		k++;
		j++;
	}
    printf("\nArray B:");
    Display(b,k);
    //printf("\n");
	for (i = low; i <=high; i += 1)
	{
		a[i]=b[i];
	}
    printf("\nArray A:");
    Display(a,limit);
    printf("\n");
}
int MergeSort(int low,int high)
{
	int mid;
	if(low<high)
	{
		 mid=(low+high)/2;
	}
	else
	{
		return 0;
	}
	MergeSort(low,mid);
	MergeSort(mid+1,high);
	Merge(low,mid,high);
	//printf("\nAfter sort  ");
	//Display(a,limit);
}
// MAIN
int main()
{
    
    printf("Enter the limit of the array ");
    scanf("%d", &limit);
    Input();
    printf("\nThe elements are \n");
    Display(a,limit);
    printf("\nMerge Sort\n");
	MergeSort(0,limit-1);
    printf("\nSorted Array is :-");
	Display(a,limit);
    
}