#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int top=0,n=5;

char stack[10];

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

int ISP(char a)
{
	if (a=='^')
		return 4;
	if (a=='*'||a=='/')
		return 3;
	if (a=='+'||a=='-')
		return 2;
	if (a=='(')
		return 1;
}

int ICP(char a)
{
	if (a=='^')
		return 4;
	if (a=='*'||a=='/')
		return 3;
	if (a=='+'||a=='-')
		return 2;
	if (a=='(')
		return 5;
}
int operation(int x,char a,int y)
{
	if (a=='^')
		{//printf("Power %d ",pow(x,y));
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

void evaluation(char postfix[50])
{
	int i=0,result;
	char symbol;
	symbol=postfix[i];
	
	while(symbol!='\0')
	{
		if (symbol=='*'||symbol=='-'||symbol=='/'||symbol=='+'||symbol=='^')
		{
			int y=pop();
			int x=pop();
			result=operation(x,symbol,y);
			push(result);
			//display();
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



int main()
{	stack[top]='(';
	
	char symbol,infix[50],postfix[50],x;
	int i=0,index=0;
	printf("Enter the Infix Expression ");
	scanf("%s",infix);
	int len=strlen(infix);
	
	
	infix[len]=')';
	len++;
	infix[len]='\0';
	
	
	
	
	while(top!=-1)
	
	{	
		
		symbol=infix[i];
		
		
		i++;
		
		if (symbol=='*'||symbol=='-'||symbol=='/'||symbol=='+'||symbol=='^'||symbol=='(')
		{	
			x=pop();
			if(ISP(x)>=ICP(symbol))
			{
				while(ISP(x)>=ICP(symbol))
				{
					postfix[index]=x;
					index++;
					
					
					x=pop();
				}
				push(x);
				push(symbol);
			}
			
			else
			{
				push(x);
				push(symbol);
				
				
			}
			
		}
		else if (symbol==')')
		{	
			x=pop();
			while(x!='(')
			{	
				postfix[index]=x;
				index++;
				x=pop();
			}
			
		}
		else
		{	
			postfix[index]=symbol;
			index++;
			
		}
		
	}
	index++;
	postfix[index]='\0';
	
	
	printf("Infix IS %s \n",infix);		
	printf("Postfix IS %s \n",postfix);
	evaluation(postfix);

}


/*
Enter the Infix Expression a+(b+c^d)-f
Infix IS a+(b+c^d)-f) 
Postfix IS abcd^++f- 
Enter the value of operand a 10
Enter the value of operand b 7
Enter the value of operand c 2
Enter the value of operand d 3
Enter the value of operand f 5
Answer is 20*/
