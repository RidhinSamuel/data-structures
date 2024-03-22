// Menu driven program to implement linear queue operations
#include<stdio.h>
#include<stdlib.h>
int front=0,rear=0,Q[100],n=0;			/* Defining a queue of size 100. */
/*insert the item at the rear of the queue */
void ENQUEUE(int item)
{	
	/* This is checking if the queue is full or not. */
	if(rear==n)
	{
		printf("Queue IS FULL\n");
	}
	else
	{	/*Initially when queue is empty increment both front and rear and store at rear*/
		if(front==0 && rear==0)
		{
			rear++;
			Q[rear]=item;
			front++;
		}
		/* This is inserting the element at the rear of the queue. */
		else
		{
			rear++;
			Q[rear]=item;
		}

	}
}

//If the queue is not empty, then remove the first element from the queue
void DEQUEUE()
{	int item;	
	/* This is checking if the queue is empty or not. */
	if(front==0 && rear==0)
	{
		printf("Queue IS EMPTY \n");	
	}
	else
	{	
		/* If there is only one element */
		if(front==rear)
		{
			item=Q[front];
			front=0;
			rear=0;
		}
		/* This is removing the first element from the queue. */
		else
		{
			item=Q[front];
			front++;
		}
	}
}

//It prints the elements of the queue from front to rear
void display()
{
	/* This is checking if the queue is empty or not. */
	if(front==0 && rear==0)
	{
		printf("Queue IS EMPTY \n");	
	}
	/* This is printing the elements of the queue from front to rear. */
	else
	{	printf("QUEUE IS ");
		for(int i=front;i<=rear;i++)
		{
			printf("%d ",Q[i]);	
		}
		printf("\n");
	}
}

//MAIN
int main()
{	int ch,item;
	/* Taking the size of the queue from the user. */
	printf("Enter the size of queue");
	scanf("%d",&n);
	
	while(1)
	{	
		printf("\nMENU\n");
		printf("1 Enqueue\n");
		printf("2 Dequeue\n");
		printf("3 exit\n");		
		printf("Enter your choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:printf("Enter the element ");
				   scanf("%d",&item);
				   ENQUEUE(item);
				   display();
				   break;
			case 2:DEQUEUE();
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

/*Enter the size of queue 4

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 1
Enter the element 1
QUEUE IS 1 

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 1
Enter the element 2
QUEUE IS 1 2 

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 1
Enter the element 3
QUEUE IS 1 2 3 

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 1
Enter the element 4
QUEUE IS 1 2 3 4 

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 1
Enter the element 5
Queue IS FULL
QUEUE IS 1 2 3 4

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 2
QUEUE IS 2 3 4 

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 2
QUEUE IS 3 4 

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 2
QUEUE IS 4 

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 2
Queue IS EMPTY 

MENU
1 Enqueue
2 Dequeue
3 exit
Enter your choice 3
*/