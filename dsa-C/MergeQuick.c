#include<stdio.h>
int limit,b[50],a[50];
void Input()
{
	for (int i = 0;i < limit;i += 1)
	{
		printf("Enter the element ");
		scanf("%d",&a[i]);
	}
}

void Display(int c[50])
{
	printf("\nThe elements are \n");
	for (int i = 0;i < limit;i += 1)
	{
		printf("%d ",c[i]);
	}
}

void QuickSort(int first,int last)
{
    int pivot,i,j,temp;
    if (first<last)
    {
        pivot=a[first];
        i=first;
        j=last;
        while (i<j)
        {
            while (a[i]<=pivot && i<last)
            {
                i++;
            }
            while(a[j]>=pivot && j>first)
            {
                j--;
            }
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            Display(a);
        }
        temp=a[first];
        a[first]=a[j];
        a[j]=temp;
        Display(a);
        QuickSort(first,j-1);
        QuickSort(j+1,last);
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
/*	printf("\nARRAY B ");*/
/*	Display(b);*/
/*	printf("\nARRAY A ");*/
/*	Display(a);*/
	for (i = low; i <=high; i += 1)
	{
		a[i]=b[i];
	}
/*	printf("\nafter B ");*/
/*	Display(b);*/
/*	printf("\nafter A ");*/
/*	Display(a);*/
/*	*/
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
	printf("\nAfter sort  ");
	Display(a);
}
int main()
{
    
	printf("Enter the limit of the array ");
	scanf("%d",&limit);
	Input();
	Display(a);
    QuickSort(0,limit-1);
    Display(a);
    
    
    printf("Enter the limit of the array ");
	scanf("%d",&limit);
	Input();
	Display(a);
	MergeSort(0,limit-1);

}
