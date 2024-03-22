#include<stdio.h>
#include<stdlib.h>
int front=0,limit,rear=0,queue[30],item;
void display()
{	int i;
	printf("Circular Queue is ");
	for(i=front;i!=rear;)
	{	
		printf(" %d ",queue[i]);
		i=(i%limit)+1;
	}
	printf(" %d \n",queue[i]);
}
/*void truncate()*/
/*{*/
/*	*/
/*}*/
void ENCIRCULAR() //funtion to insert to the queue
{	printf("Encirular \n");
	if ((rear%limit)+1==front) //Condition to check if queue is full
		printf("QUEUE is full \n\n");
	else
	{	printf("Enter the element ");
		scanf("%d",&item);
		if(front==0 && rear==0) 
		{	
			rear=(rear%limit)+1;
			queue[rear]=item;
			front=(front%limit)+1;
		}
		else
		{
			rear=(rear%limit)+1;
			queue[rear]=item;
		}
	}
}
void DECIRCULAR() //function to delete from queue
{	if(front==0 && rear==0)
	{
		printf("QUEUE is empty\n");
		
	}
	else
	{
		if(front==rear)
		{
			item=queue[front];
			front=0;
			rear=0;
			
		}
		else
		{
		item=queue[front];
		front=(front%limit)+1;
		}
	}
}
void main()
{
	int ch;
	printf("Enter the limit of the Queue ");
	scanf("%d",&limit);
	while(1)
	{
		printf("\nMENU\n");
		printf("1 ENCIRCULAR\n");
		printf("2 DECIRCULAR\n");
		printf("3 Exit\n");
		printf("Enter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:ENCIRCULAR();
				   display();
				   break;
			case 2:DECIRCULAR();
					display();
					break;
			case 3:exit(0);
					break;
			default:
					printf("ERROR \nTRY AGAIN\n");
					break;
				
		}
	}
}
