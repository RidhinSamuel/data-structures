#include<stdio.h>
#include<math.h>
int top=-1,n=50;

char stack[50];

void push(char item )
{
	if(top==n-1)
	{
		printf("STACK IS FULL\n");
	}
	else
	{
	top++;
	//printf("Enter the element\n");
	stack[top]=item;
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
			printf("%c ",stack[i]);
			
		}
		printf("\n");
		
	}
}
char pop()
{	char item;
	if (top==-1)
	{
		printf("STACK IS EMPTY \n");
		
	}
	else
	{	item=stack[top];
		top--;
		return item;
	}
}
int operation(int x,char a,int y)
{
	if (a=='^')
		{printf("Power %d ",pow(x,y));
		return pow(x,y);}
	if (a=='*')
		return x*y;
	if (a=='/')
		return x/y;
	if (a=='+')
		return x+y;
	if (a=='-')
		return x-y;
	
		
}

void main()
{	int i=0,result;	
	char postfix[50],symbol;
	printf("Enter the postfix expression ");
	scanf("%s",postfix);
	symbol=postfix[i];
	
	while(symbol!='\0')
	{
		if (symbol=='*'||symbol=='-'||symbol=='/'||symbol=='+'||symbol=='^')
		{
			int y=pop();
			int x=pop();
			result=operation(x,symbol,y);
			printf("X : %d Y :%d symbol %c RESULT %d \n",x,y,symbol,result);
			push(result);
			display();
		}
		else
		{	int value;
			printf("Enter the value of operand %c ",symbol);
			scanf("%d",&value);
			push(value);
		}
		i++;
		symbol=postfix[i];
	}
	printf("Answer is %d ",pop());
	
}




/*Enter the postfix expression ab+*/
/*Enter the value of operand a 2*/
/*Enter the value of operand b 3*/
/*Answer is 5 */
