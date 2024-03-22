#include<stdio.h>
int n,size,item,a[50],i,temp,p;
void Display()
{
	for (i = 0; i < size+1; i += 1)
	{
			printf("%d ",a[i]);
	}
	printf("\n");
}
void InsertHeap()
{
	if (n>size)
	{
		printf("Not Possible ");
	}
	else
	{
		n++;
		a[n]=item;
		i=n;
		p=i/2;
		while(p>0 && a[p]<a[i])
		{
			temp=a[p];
			a[p]=a[i];
			a[i]=temp;
			i=p;
			p=p/2;
		}
	}
}
int main()
{
	scanf("%d",&size);
	int n=1;
	while(n<=size)
	{
		printf("Enter the item");
		scanf("%d",&item);
		InsertHeap();
		n++;
	}
	Display();
}
