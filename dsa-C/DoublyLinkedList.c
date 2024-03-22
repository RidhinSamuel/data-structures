#include<stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *Rlink;
	struct node *Llink;
}node;

int value;
node *head=NULL,*temp2=NULL,*tail=NULL,*temp1=NULL;

int number_of_node=0;

void Display();
//To Insert at the begining
void InsertAtStart()
{	
	node *p=(node*)malloc(sizeof(node));
	if(head==NULL){
		head=p;
		tail=p;
		p->Llink=NULL;
		p->Rlink=NULL;
	}
	else{
		p->Llink=NULL;
		p->Rlink=head;
		head=p;
	}
	printf("Enter the data : ");
	scanf("%d",&value);
	p->data=value;
	number_of_node++;	
}
/**
 * It creates a new node and inserts it at the end of the list
 */
void InsertAtEnd()
{	/* If the linked list is empty, then it will insert the node at the start. */
	if (head==NULL)
	{
		InsertAtStart();
	}
	/* Inserting a node at the end of the linked list. */
	else
	{
	node *p=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&value);
	p->data=value;
	p->Llink=tail;
	p->Rlink=NULL;
	tail->Rlink=p;
	tail=p;
	number_of_node++;
	}
}

/**
 * It creates a new node and inserts it at a given position
 */
void InsertAnywhere()
{
	int position;
	printf("Enter the position to create NODE ");
	scanf("%d",&position);
	if(head==NULL)
	{
		InsertAtStart();
	}
	else
	{
		if(position==0 || position>number_of_node+1 || number_of_node==0)
		{
			printf("\nInsertion at %d position is not possible ",position);
			
		}
		else
		{
			/* Checking if the position is 1, then it will insert the node at the start. */
			if (position==1)
			{
				InsertAtStart();
			}
			else if (position==number_of_node+1)
			{
				InsertAtEnd();
			}
			/* Inserting a node at a given position. */
			else
			{
				node *p=(node*)malloc(sizeof(node));
				printf("Enter the data : ");
				scanf("%d",&value);
				p->data=value;
				temp2=head;
				for (int i = 1; i < position-1; i++)
				{
					temp2=temp2->Rlink;
				}
				temp1=temp2->Rlink;
				p->Rlink=temp1;
				temp1->Llink=p;
				temp2->Rlink=p;
				p->Llink=temp2;
				number_of_node++;
			}
		}
	
	}
}
//To Delete the node at start
void DeletionAtStart()
{
	if(head!=NULL)
	{	
		temp1=head;
		printf("DELETED DATA IS %d\n",temp1->data);
		if(head==tail)
		{	
			head=NULL;
			tail=NULL;
		}
		else{
		
			head=head->Rlink;
			
		}
		free(temp1);
		number_of_node--;
	}
	else
	{
		printf("Linked list is empty");
	}
	
}

/**
 * We traverse the linked list till the last node and then delete the last node
 */
void DeletionAtEnd()
{
	/* Checking if the linked list is empty or not. */
	if (head==NULL)
	{
		printf("Linked list is empty");
	}	
	/* Deleting the last node of the linked list. */
	else
	{	
		temp1=tail;
		printf("DELETED DATA IS %d\n",temp1->data);
		if(head==tail)
		{	
			head=NULL;
			tail=NULL;
		}
		else{
		
			tail=tail->Llink;
			tail->Rlink=NULL;
		}
		free(temp1);
		number_of_node--;
	}
}

void DeletionAnywhere()
{
	int position;
	printf("Enter the position to delete NODE ");
	scanf("%d",&position);
	/* This is a condition to check if the position entered by the user is valid or not. */
	if(position==0 || position>number_of_node || number_of_node==0)
	{
		printf("\nDeletion at %d position is not possible \n",position);
		//Display();
		
	}
	/**
	 * If the linked list is empty, print "Empty Linked List"
	 */
	else if ( head==NULL)
	{
		printf("\nEmpty Linked List\n");	
	}
	/**
	 * If position=1 it deletes the node at the start of the list
	 */
	else if (position==1)
	{	
		DeletionAtStart();
	}
	else if (position==number_of_node)
	{
		DeletionAtEnd();
	}
	/* Deleting the node at a given position. */
	else
	{
		temp1=head->Rlink;
		temp2=head;
		for (int i = 1; i < position-1; i++)
		{
			
			temp1=temp1->Rlink;
			temp2=temp2->Rlink;
		}
		temp2->Rlink=temp1->Rlink;
		temp1->Rlink->Llink=temp2;
		free(temp1);
		number_of_node--;		
	}
	
	
	
}
//To Display the node
void Display()
{	temp1=head;
	if (number_of_node!=0)
	{	printf("\n");
		printf("LIST IS:-  ");
		for (int i = 1;temp1!=NULL; i++)
		{	
			printf("%d ",temp1->data);
			temp1=temp1->Rlink;
		}
	}
	else
	{
		printf("\nNO DATA TO PRINT \n");
	}
	//printf("\nNUMBER NODES IN LIST IS %d ",number_of_node);
}

/**
 * MAIN
 */
void main()
{	int choice;
	while(1){
		printf("\n\nMENU\n");
		printf("1)Insert Node At Begining\n"); //complete
		printf("2)Insert Node At End \n");  //complete
		printf("3)Insert Anywhere\n");		//complete
		printf("4)Delete Node At Begining\n");  //complete
		printf("5)Delete Node At End\n");		//complete
		printf("6)Delete Anywhere\n");		//complete
		printf("7)Display\n");
		printf("8)Exit\n");						//complete
		printf("Enter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:{//1)Insert Node At Begining
			InsertAtStart();
			Display();
			break;
			}
			
			case 2:{//2)Insert Node At End
			InsertAtEnd();
			Display();
			break;
			}
			case 3:{//3)Insert Anywhere
			InsertAnywhere();
			Display();
			break;
			}

			case 4:{//4)Delete Node At Begining
			DeletionAtStart();
			Display();
			break;
			}

			case 5:{//5)Delete Node At End
			DeletionAtEnd();
			Display();
			break;
			}

			case 6:{//6)Delete Anywhere
			DeletionAnywhere();
			Display();
			break;
			}
			case 7:{//7)Disaply
			Display();
			break;
			}
			case 8:{//EXIT
			printf("\nPROGRAM ENDS HERE..........\n");
			exit(0);
			break;
			}
			
			default:{
			printf("\nERROR");
			}
		}
	}
	
}


/**

MENU
1)Insert Node At Begining
2)Insert Node At End 
3)Insert Anywhere
4)Delete Node At Begining
5)Delete Node At End
6)Delete Anywhere
7)Display
8)Exit
Enter your choice 1
Enter the data : 0

LIST IS:-  0 

MENU
1)Insert Node At Begining
2)Insert Node At End 
3)Insert Anywhere
4)Delete Node At Begining
5)Delete Node At End
6)Delete Anywhere
7)Display
8)Exit
Enter your choice 2
Enter the data : 2

LIST IS:-  0 2 

MENU
1)Insert Node At Begining
2)Insert Node At End 
3)Insert Anywhere
4)Delete Node At Begining
5)Delete Node At End
6)Delete Anywhere
7)Display
8)Exit
Enter your choice 3
Enter the position to create NODE 1
Enter the data : 1

LIST IS:-  1 0 2 

MENU
1)Insert Node At Begining
2)Insert Node At End 
3)Insert Anywhere
4)Delete Node At Begining
5)Delete Node At End
6)Delete Anywhere
7)Display
8)Exit
Enter your choice 6
Enter the position to delete NODE 2

LIST IS:-  1 2 

MENU
1)Insert Node At Begining
2)Insert Node At End 
3)Insert Anywhere
4)Delete Node At Begining
5)Delete Node At End
6)Delete Anywhere
7)Display
8)Exit
Enter your choice 5
DELETED DATA IS 2

LIST IS:-  1 

MENU
1)Insert Node At Begining
2)Insert Node At End 
3)Insert Anywhere
4)Delete Node At Begining
5)Delete Node At End
6)Delete Anywhere
7)Display
8)Exit
Enter your choice 4
DELETED DATA IS 1

NO DATA TO PRINT 


MENU
1)Insert Node At Begining
2)Insert Node At End 
3)Insert Anywhere
4)Delete Node At Begining
5)Delete Node At End
6)Delete Anywhere
7)Display
8)Exit
Enter your choice 7

NO DATA TO PRINT 


MENU
1)Insert Node At Begining
2)Insert Node At End 
3)Insert Anywhere
4)Delete Node At Begining
5)Delete Node At End
6)Delete Anywhere
7)Display
8)Exit
Enter your choice 8

PROGRAM ENDS HERE..........
*/


