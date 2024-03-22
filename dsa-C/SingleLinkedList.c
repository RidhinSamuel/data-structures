#include<stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}node;
void Display();
int value;
node *head=NULL,*temp=NULL;
/*node *head=NULL;
node *temp=NULL;
node *p;*/
int number_of_node=0;
void main();

//To Insert at the begining
void InsertAtStart()
{	
	node *p=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&value);
	p->data=value;
	p->link=head;
	head=p;
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
	p->link=NULL;
	temp=head;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=p;
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
	if(position==0 || position>number_of_node+1 || number_of_node==0)
	{
		printf("\nInsertion at %d position is not possible ",position);
		main();
	}
	else
	{
		/* Checking if the position is 1, then it will insert the node at the start. */
		if (position==1)
		{
			InsertAtStart();
		}
		/* Inserting a node at a given position. */
		else
		{
			node *p=(node*)malloc(sizeof(node));
			printf("Enter the data : ");
			scanf("%d",&value);
			p->data=value;
			temp=head;
			for (int i = 1; i < position-1; i++)
			{
				temp=temp->link;
			}
			p->link=temp->link;
			temp->link=p;
			number_of_node++;
		}
	}
}
//To Delete the node at start
void DeletionAtStart()
{
	if(head!=NULL)
	{
		temp=head;
		printf("DELETED DATA IS %d\n",head->data);
		head=head->link;
		free(temp);
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
	/**
	 * If there is only one node it  deletes that node of the linked list.
	 */
	else if (head->link==NULL)
	{
		printf("Deleted Data is %d\n",head->data);
		free(head);
		head==temp;
		number_of_node--;
	}
	
	/* Deleting the last node of the linked list. */
	else
	{	node* temp1=head;
		temp=head->link;
		while(temp->link!=NULL)
		{
			temp=temp->link;
			temp1=temp1->link;
		}
		printf("Deleted Data is %d\n",temp->data);
		temp1->link=NULL;
		free(temp);
		number_of_node--;
	}
}

void DeletionAnywhere()
{
	int position;
	printf("Enter the position to delete NODE ");
	scanf("%d",&position);
	/* This is a condition to check if the position entered by the user is valid or not. */
	if(position==0 || position>number_of_node)
	{
		printf("\nDeletion at %d position is not possible \n",position);
		Display();
		main();
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
	/* Deleting the node at a given position. */
	else
	{	node* temp2=head;
		node* temp1=head->link;
		for(int i=1;i<position-1;i++)
		{
			temp1=temp1->link;
			temp2=temp2->link;
		}
		printf("\nDeleted Data is %d\n",temp1->data);
		temp2->link=temp1->link;
		free(temp1);
		number_of_node--;
	}
	
	
	
}
//To Display the node
void Display()
{	temp=head;
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
		printf("7)Exit\n");					//complete
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
			case 7:{//EXIT
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




/*MENU*/
/*1)Insert Node At Begining*/
/*2)Insert Node At End */
/*3)Insert Anywhere*/
/*4)Delete Node At Begining*/
/*5)Delete Node At End*/
/*6)Delete Anywhere*/
/*7)Exit*/
/*Enter your choice 1*/
/*Enter the data : 1*/

/*LIST IS:-  1 */

/*MENU*/
/*1)Insert Node At Begining*/
/*2)Insert Node At End */
/*3)Insert Anywhere*/
/*4)Delete Node At Begining*/
/*5)Delete Node At End*/
/*6)Delete Anywhere*/
/*7)Exit*/
/*Enter your choice 2*/
/*Enter the data : 2*/

/*LIST IS:-  1 2 */

/*MENU*/
/*1)Insert Node At Begining*/
/*2)Insert Node At End */
/*3)Insert Anywhere*/
/*4)Delete Node At Begining*/
/*5)Delete Node At End*/
/*6)Delete Anywhere*/
/*7)Exit*/
/*Enter your choice 2*/
/*Enter the data : 3*/

/*LIST IS:-  1 2 3 */

/*MENU*/
/*1)Insert Node At Begining*/
/*2)Insert Node At End */
/*3)Insert Anywhere*/
/*4)Delete Node At Begining*/
/*5)Delete Node At End*/
/*6)Delete Anywhere*/
/*7)Exit*/
/*Enter your choice 3*/
/*Enter the position to create NODE 2*/
/*Enter the data : -2*/

/*LIST IS:-  1 -2 2 3 */

/*MENU*/
/*1)Insert Node At Begining*/
/*2)Insert Node At End */
/*3)Insert Anywhere*/
/*4)Delete Node At Begining*/
/*5)Delete Node At End*/
/*6)Delete Anywhere*/
/*7)Exit*/
/*Enter your choice 6*/
/*Enter the position to delete NODE 3*/

/*Deleted Data is 2*/

/*LIST IS:-  1 -2 3 */

/*MENU*/
/*1)Insert Node At Begining*/
/*2)Insert Node At End */
/*3)Insert Anywhere*/
/*4)Delete Node At Begining*/
/*5)Delete Node At End*/
/*6)Delete Anywhere*/
/*7)Exit*/
/*Enter your choice 4*/
/*DELETED DATA IS 1*/

/*LIST IS:-  -2 3 */

/*MENU*/
/*1)Insert Node At Begining*/
/*2)Insert Node At End */
/*3)Insert Anywhere*/
/*4)Delete Node At Begining*/
/*5)Delete Node At End*/
/*6)Delete Anywhere*/
/*7)Exit*/
/*Enter your choice 5*/
/*Deleted Data is 3*/

/*LIST IS:-  -2 */

/*MENU*/
/*1)Insert Node At Begining*/
/*2)Insert Node At End */
/*3)Insert Anywhere*/
/*4)Delete Node At Begining*/
/*5)Delete Node At End*/
/*6)Delete Anywhere*/
/*7)Exit*/
/*Enter your choice 5*/
/*Deleted Data is -2*/

/*NO DATA TO PRINT */


/*MENU*/
/*1)Insert Node At Begining*/
/*2)Insert Node At End */
/*3)Insert Anywhere*/
/*4)Delete Node At Begining*/
/*5)Delete Node At End*/
/*6)Delete Anywhere*/
/*7)Exit*/
/*Enter your choice 7*/

/*PROGRAM ENDS HERE..........*/


