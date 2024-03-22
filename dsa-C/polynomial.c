#include<stdio.h>
struct polynomial
{
	int coeff;
	int exp;
}poly1[50],poly2[50],poly3[50];

int main()
{
	int terms_poly1,terms_poly2,coefficient,exponential,c1=0,c2=0,c3=0;
	printf("Enter the number of terms of poly1 \n");
	scanf("%d",&terms_poly1);
	
	//input for poly1
	printf("Enter the polynomial 1 \n");
	for (int i=0;i<terms_poly1;i++)
	{
		printf("Enter the coefficient ");
		scanf("%d",&coefficient);
		printf("Enter the exponential ");
		scanf("%d",&exponential);
		poly1[i].coeff=coefficient;
		poly1[i].exp=exponential;
	}
	printf("POLYNOMIAL 1 IS \nTERM\t\tCOEFFICIENT\t\tEXPONENIAL\n");
	for (int i=0;i<terms_poly1;i++)
	{
		printf("%d\t\t%dx\t\t%d\n",i+1,poly1[i].coeff,poly1[i].exp);
	}
	printf("Enter the number of terms of poly2 ");
	scanf("%d",&terms_poly2);
	//input for poly2
	printf("Enter the polynomial 2\n");
	for (int i=0;i<terms_poly2;i++)
	{
		printf("Enter the coefficient ");
		scanf("%d",&coefficient);
		printf("Enter the exponential ");
		scanf("%d",&exponential);
		poly2[i].coeff=coefficient;
		poly2[i].exp=exponential;
	}
	
	printf("POLYNOMIAL 2 IS \nTERM\t\tCOEFFICIENT\t\tEXPONENIAL\n");
	for (int i=0;i<terms_poly2;i++)
	{
		printf("%d\t\t%dx\t\t%d\n",i+1,poly2[i].coeff,poly2[i].exp);
	}
	
	while(c1<terms_poly1 && c2<terms_poly2)
	{
		if(poly1[c1].exp==poly2[c2].exp)
		{
			poly3[c3].exp=poly1[c1].exp;
			poly3[c3].coeff=poly1[c1].coeff+poly2[c2].coeff;
			c1++;c2++;c3++;
		}
		else if(poly1[c1].exp>poly2[c2].exp)
		{
			poly3[c3].exp=poly1[c1].exp;
			poly3[c3].coeff=poly1[c1].coeff;
			c1++;c3++;
		}
		else if(poly1[c1].exp<poly2[c2].exp)
		{
			poly3[c3].exp=poly2[c2].exp;
			poly3[c3].coeff=poly2[c2].coeff;
			c2++;c3++;
		}
	}
	while(c1<terms_poly1)
	{
		poly3[c3].exp=poly1[c1].exp;
		poly3[c3].coeff=poly1[c1].coeff;
		c1++;c3++;
	}
	while(c2<terms_poly2)
	{
		poly3[c3].exp=poly2[c2].exp;
		poly3[c3].coeff=poly2[c2].coeff;
		c2++;c3++;
	}
	printf("SUM IS \nTERM\t\tCOEFFICIENT\t\tEXPONENIAL\n");
	for (int i=0;i<c3;i++)
	{
		printf("%d\t\t%dx\t\t%d\n",i+1,poly3[i].coeff,poly3[i].exp);
	}
	
	
	
}



/*Enter the number of terms of poly1 */
/*4*/
/*Enter the polynomial 1 */
/*Enter the coefficient 4*/
/*Enter the exponential 3*/
/*Enter the coefficient 2*/
/*Enter the exponential 2*/
/*Enter the coefficient -7*/
/*Enter the exponential 1*/
/*Enter the coefficient 3*/
/*Enter the exponential 0*/
/*POLYNOMIAL 1 IS */
/*TERM		COEFFICIENT		EXPONENIAL*/
/*1		4x		3*/
/*2		2x		2*/
/*3		-7x		1*/
/*4		3x		0*/
/*Enter the number of terms of poly2 3*/
/*Enter the polynomial 2*/
/*Enter the coefficient -1*/
/*Enter the exponential 2*/
/*Enter the coefficient 6*/
/*Enter the exponential 1*/
/*Enter the coefficient -5*/
/*Enter the exponential 0*/
/*POLYNOMIAL 2 IS */
/*TERM		COEFFICIENT		EXPONENIAL*/
/*1		-1x		2*/
/*2		6x		1*/
/*3		-5x		0*/
/*SUM IS */
/*TERM		COEFFICIENT		EXPONENIAL*/
/*1		4x		3*/
/*2		1x		2*/
/*3		-1x		1*/
/*4		-2x		0*/

