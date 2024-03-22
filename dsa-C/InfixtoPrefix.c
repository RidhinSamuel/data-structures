#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=0,n=10;

char stack[10];

void push(char item )
{
	if(top==n-1)
	{
		printf(" push STACK IS FULL\n");
	}
	else
	{
	top++;
	
	stack[top]=item;
	}
}

void display()
{
	
	if (top==-1)
	{
		printf("display STACK IS EMPTY \n");
		
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
		printf(" pop STACK IS EMPTY \n");
		
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
	if (a==')')
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
	if (a==')')
		return 5;
}

void reverse(char string[50],int len)
{	char duplicate;
	for(int i=0;i<=len/2;i++)
	{
		duplicate=string[i];
		string[i]=string[len-1-i];
		string[len-1-i]=duplicate;		
	}
}



int main()
{	stack[top]=')';
	
	char symbol,infix[50],postfix[50],x;
	int i=0,index=0;
	printf("Enter the Infix Expression ");
	scanf("%s",infix);
	int len=strlen(infix);
	printf("the Infix Expression %s\n",infix);
	printf("Length is %d \n",len);
	reverse(infix,len);
	
	infix[len]='(';
	len++;
	infix[len]='\0';
	printf("the Infix Expression %s\n",infix);
	display();
	while(top!=-1)
	{	
		symbol=infix[i];	
		i++;
		printf("Symbol is %c\n",symbol);
		
		if (symbol=='*'||symbol=='-'||symbol=='/'||symbol=='+'||symbol=='^'||symbol==')')
		{	printf("It is Operator \n");
			
			x=pop();
			if(ISP(x)>ICP(symbol))
			{
				while(ISP(x)>ICP(symbol))
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
		else if (symbol=='(')
		{	printf("It is ( \n");
			
			x=pop();
			while(x!=')')
			{	
				postfix[index]=x;
				index++;
				x=pop();
			}
			
		}
		else
		{	printf("It is Opernad \n");
			postfix[index]=symbol;
			index++;
			
		}
		
	}
	index++;
	postfix[index]='\0';
	printf("Infix IS %s \n",infix);
	reverse(postfix,index-1);		
	printf("Postfix IS %s \n",postfix);

}
