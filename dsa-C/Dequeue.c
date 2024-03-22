#include<stdio.h>
#include<stdlib.h>
int front=0,limit,rear=0,queue[30],item,temp;
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
void INJECT() //funtion to insert to the queue using rear
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
void POPDQ() //function to delete from queue using front
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

void PUSHDQ()
{
    if(front==1)
    {
        temp=limit;
    }
    else if(front==0)
    {
        temp=1;
    }
    else
    {
        temp=front-1;
    }
    if(temp==front)
    {
        printf("Queue is full");
    }
    else{
        front=temp;
        printf("Enter the element ");
        scanf("%d",&item);
        queue[front]=item;
        if(rear==0)
        {
            rear=1;
        }
    }
}
void EJECT()
{
    if(front==0 && rear==0)
    {
        printf("Queue is empty");
    }
    else
    {
        if(rear==front)
        {
            item=queue[rear];
            rear=0;
            front=0;
        }
        else if(rear==1)
        {
            item=queue[rear];
            rear=limit;
        }
        else
        {
            item=queue[rear];
            rear--;
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
		printf("1 INJECT\n");
		printf("2 POPDQ\n");
		printf("3 PUSHDQ\n");
		printf("4 EJECT\n");
		printf("5 Exit\n");
		printf("Enter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:INJECT();
				   display();
				   break;
			case 2:POPDQ();
					display();
					break;
			case 3:PUSHDQ();
			        display();
			        break;
			case 4:EJECT();
			        display();
			        break;
			case 5:exit(0);
					break;
			default:
					printf("ERROR \nTRY AGAIN\n");
					break;
				
		}
	}
}
