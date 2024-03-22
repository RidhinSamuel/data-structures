#include<stdio.h>
#include<stdlib.h>
int top=-1,n=5,s[5];

void push()
{
	if(top==n-1)
	{
		printf("STACK IS FULL\n");
	}
	else
	{
	top++;
	printf("Enter the element\n");
	scanf("%d",&s[top]);
	}
}

void display()
{
	
	if (top==-1)
	{
		printf("STACK IS EMPTY \n");
		
	}
	else
	{
		printf("STACK IS ");
		for(int i=0;i<top+1;i++)
		{
			printf("%d ",s[i]);
			
		}
		printf("\n");
		
	}
}
void pop()
{
	if (top==-1)
	{
		printf("STACK IS EMPTY \n");
		
	}
	else
	{
		top--;
	}
}

int main()
{	int ch;
	while(1)
	{
		printf("MENU\n");
		printf("1 PUSH\n");
		printf("2 POP\n");
		printf("3 Display\n");
		printf("4 Exit\n");
		
		printf("Enter your choice ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:push();
				   display();
				   break;
			case 2:pop();
					display();
					break;
			case 3:display();
					break;
			case 4:exit(0);
					break;
			default:
					printf("ERROR \nTRY AGAIN\n");
					break;
				
				
		}
		
	}
}
