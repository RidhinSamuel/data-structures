#include<stdio.h>
#include <stdlib.h>

typedef struct poly
{
	int coeff;
	int expo;
	struct poly *link;
}poly;

int value,polya_limit,polyb_limit,number_result=0;
poly *polya_head=NULL,*polyb_head=NULL,*temp=NULL,*polyresult_head=NULL;
void Result(int C,int E)
{
	poly *p=(poly*)malloc(sizeof(poly));
	p->coeff=C;
	p->expo=E;
	p->link=NULL;
	if(polyresult_head==NULL)
	{
		polyresult_head=p;
	}
	else
	{
		temp=polyresult_head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=p;
	}

	number_result++;
}
void Display(poly *head,int limit)
{
	temp=head;
	printf("\n");
	for (int i = 1;temp!=NULL; i++)
	{	if (temp->coeff>0 && i!=1)
		{
			printf("+");
		}
		else if (temp->expo==0)
		{
			printf("%d",temp->coeff);
			temp=temp->link;
			continue;
		}
		else{
		}
		printf("%dX^%d",temp->coeff,temp->expo);
		
		temp=temp->link;
	}
	
}
poly* createpoly(int limit)
{	poly *head=NULL;
	for (int i = 0; i < limit; i += 1)
	{
		poly *p=(poly*)malloc(sizeof(poly));
		printf("\nEnter the Coefficient : ");
		scanf("%d",&p->coeff);
		printf("Enter the Exponential :");
		scanf("%d",&p->expo);
		p->link=NULL;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			temp=head;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=p;
		}
		
	}
	return head;
	
}
void AddPoly()
{	int S;
	poly *A=polya_head,*B=polyb_head;
	while(A!=NULL && B!=NULL)
	{
		if(A->expo==B->expo)
		{
			S=A->coeff+B->coeff;
			Result(S,A->expo);
			A=A->link;
			B=B->link;
		}
		else if (A->expo>B->expo)
		{
			Result(A->coeff,A->expo);
			A=A->link;
		}
		else if (A->expo<B->expo)
		{
			Result(B->coeff,B->expo);
			B=B->link;
		}
	}
	while(A!=NULL)
	{
		Result(A->coeff,A->expo);
		A=A->link;
	}
	while(B!=NULL)
	{
		Result(B->coeff,B->expo);
		B=B->link;
	}
}
void main()
{
	printf("Enter the Number of Terms in Polynomial A ");
	scanf("%d",&polya_limit);
	polya_head=createpoly(polya_limit);
	printf("Polynomial A is ");
	Display(polya_head,polya_limit);
	
	printf("\nEnter the Number of Terms in Polynomial B ");
	scanf("%d",&polyb_limit);
	polyb_head=createpoly(polyb_limit);
	printf("Polynomial B is ");
	Display(polyb_head,polyb_limit);
	
	AddPoly();
	printf("\nSUM Polynomial  is ");
	Display(polyresult_head,number_result);
	
}

/*
Enter the Number of Terms in Polynomial A 2

Enter the Coefficient : 10
Enter the Exponential :2

Enter the Coefficient : -10
Enter the Exponential :1
Polynomial A is 
10X^2-10X^1
Enter the Number of Terms in Polynomial B 3

Enter the Coefficient : 3
Enter the Exponential :3

Enter the Coefficient : -2
Enter the Exponential :2

Enter the Coefficient : -10
Enter the Exponential :0
Polynomial B is 
3X^3-2X^2-10
SUM Polynomial  is 
3X^3+8X^2-10X^1-10
*/
