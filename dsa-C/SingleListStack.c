#include<stdio.h>
#include <stdlib.h>
int value;

int number_of_node=0;
void main();
typedef struct node
{
	int data;
	struct node *link;
}node;
node *head=NULL,*temp=NULL;
void push()
{
	node *p=(node*)malloc(sizeof(node));
	printf("Enter the data : ");
	scanf("%d",&value);
	p->data=value;
	p->link=head;
	head=p;
	number_of_node++;	
}
void pop()
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
		printf("STACK is empty");
	}
}
//To Display the node
void Display()
{	temp=head;
	if (number_of_node!=0)
	{	printf("\n");
		printf("STACK IS:-  ");
		for (int i = 1;temp!=NULL; i++)
		{	
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
	else
	{
		printf("\nSTACK is empty\n");
	}
	//printf("\nNUMBER NODES IN LIST IS %d ",number_of_node);
}
void main()
{	int ch;
	while(1)
	{
		printf("\nMENU\n");
		printf("1 PUSH\n");
		printf("2 POP\n");
		printf("3 Display\n");
		printf("4 Exit\n");
		
		printf("Enter your choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:push();
				   Display();
				   break;
			case 2:pop();
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
1 PUSH
2 POP
3 Display
4 Exit
Enter your choice 1
Enter the data : 4

STACK IS:-  4 
MENU
1 PUSH
2 POP
3 Display
4 Exit
Enter your choice 1
Enter the data : 6

STACK IS:-  6 4 
MENU
1 PUSH
2 POP
3 Display
4 Exit
Enter your choice 2
DELETED DATA IS 6

STACK IS:-  4 
MENU
1 PUSH
2 POP
3 Display
4 Exit
Enter your choice 2
DELETED DATA IS 4

STACK is empty

MENU
1 PUSH
2 POP
3 Display
4 Exit
Enter your choice 4
*/
