#include<stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}node;
void Display();
int value,number_of_node;
node *front=NULL,*temp=NULL,*rear=NULL;
void Enqueue()
{	
	if (front==NULL && rear==NULL)
	{
		node *p=(node*)malloc(sizeof(node));
		printf("Enter the data : ");
		scanf("%d",&value);
		p->data=value;
		p->link=NULL;
		front=p;
		rear=p;
		number_of_node++;
	}

	else
	{
	node *p=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&value);
	p->data=value;
	p->link=NULL;
	rear->link=p;
	rear=p;
	number_of_node++;
	}
}
void Dequeue()
{	
	
	if(front==rear)
	{
		printf("DELETED DATA IS %d\n",front->data);
		free(front);
		front=NULL;
		rear=NULL;
		number_of_node--;
	}
	else if(front==NULL && rear==NULL)
	{
		printf("Linked list is empty");
	}
	else
	{	printf("DELETED DATA IS %d\n",front->data);
		temp=front;
		front=front->link;
		free(temp);
		number_of_node--;
	}
	
}
void Display()
{	temp=front;
	if (number_of_node!=0)
	{	printf("\n");
		printf("LIST IS:-  ");
		for (int i = 1;temp!=NULL; i++)
		{	
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
	else
	{
		printf("\nNO DATA TO PRINT \n");
	}
	//printf("\nNUMBER NODES IN LIST IS %d ",number_of_node);
}

void main()
{
	int ch;
	while(1)
	{
		printf("\nMENU\n");
		printf("1 Enqueue\n");
		printf("2 Dequeue\n");
		printf("3 Display\n");
		printf("4 Exit\n");
		
		printf("Enter your choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:Enqueue();
				   Display();
				   break;
			case 2:Dequeue();
					Display();
					break;
			case 3:Display();
					break;
			case 4:exit(0);
					break;
			default:
					printf("ERROR \nTRY AGAIN\n");
					break;		
		}
		
	}
}

/*

MENU
1 Enqueue
2 Dequeue
3 Display
4 Exit
Enter your choice 1
Enter the data : 1

LIST IS:-  1 
MENU
1 Enqueue
2 Dequeue
3 Display
4 Exit
Enter your choice 1
Enter the data : 2

LIST IS:-  1 2 
MENU
1 Enqueue
2 Dequeue
3 Display
4 Exit
Enter your choice 1
Enter the data : 3

LIST IS:-  1 2 3 
MENU
1 Enqueue
2 Dequeue
3 Display
4 Exit
Enter your choice 1
Enter the data : 4

LIST IS:-  1 2 3 4 
MENU
1 Enqueue
2 Dequeue
3 Display
4 Exit
Enter your choice 2
DELETED DATA IS 1

LIST IS:-  2 3 4 
MENU
1 Enqueue
2 Dequeue
3 Display
4 Exit
Enter your choice 2
DELETED DATA IS 2

LIST IS:-  3 4 
MENU
1 Enqueue
2 Dequeue
3 Display
4 Exit
Enter your choice 2
DELETED DATA IS 3

LIST IS:-  4 
MENU
1 Enqueue
2 Dequeue
3 Display
4 Exit
Enter your choice 2
DELETED DATA IS 4

NO DATA TO PRINT 

MENU
1 Enqueue
2 Dequeue
3 Display
4 Exit
Enter your choice 4
*/
