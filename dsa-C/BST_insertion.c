#include<stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *Rchild,*Lchild;
}node;
node *root=NULL,*parents;

void Insertion()
{
    int item;   
    node *ptr=NULL,*parent=NULL;
    node *p=(node*)malloc(sizeof(node));
    
    printf("Enter the data : ");
	scanf("%d",&item);
	p->data=item;
	p->Rchild=NULL;
	p->Lchild=NULL;
	if (root==NULL)
	{
	    root=p;
	}
	else
	{
	    ptr=root;
	    while(ptr!=NULL)
	    {
	        parent=ptr;
	        if (ptr->data<item)
	        {
	            ptr=ptr->Rchild;
	        }
	        else if(ptr->data>item)
	        {
	            ptr=ptr->Lchild;
	        }
	        else
	        {
	            printf("\nDuplicate data cannot be inserted \n");
	            break;
	        }
	    }
	    if (parent->data>item)
	    {
	        parent->Lchild=p;   
	    }
	    else
	    {
	        parent->Rchild=p;
	    }
	}
}
void Inorder(node *ptr)
{   
    node* p=ptr;
    if (p!=NULL)
    {
        Inorder(p->Lchild);
        printf("%d ",p->data);
        Inorder(p->Rchild);
    }
}

node* Search(node *r,int item)
{
    int flag=0;   
    while(r!=NULL)
    {   
        parents=r;
        if(r->data<item)
        {   
            r=r->Rchild;
        }
        else if (r->data>item)
        {
            r=r->Lchild;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nData not found ");
        r->data=0;
        r->Rchild=NULL;
        r->Lchild=NULL;
        return r;
    }
    else
    {
        printf("Data found :--%d ",r->data);
        return r;
    }

}
node* succ(node* ptr)
{
    node* ptr1=ptr->Rchild;
    while(ptr1->Lchild!=NULL)
    {
        ptr1=ptr1->Lchild;
    }
    return ptr1;
}
int Deletion(int item)
{
    node* position=Search(root,item);
    printf("\n\n Delete  ");
    if(position->data==0)
    {
        printf("\nDATA NOT FOUND\n");
        return 0;
    }
    else
    {   //child NULL
        if(position->Lchild==NULL && position->Rchild==NULL)
        {
            if (parents->Lchild==position)
            {
                free(parents->Lchild);
                parents->Lchild=NULL;
            }
            else
            {
                free(parents->Rchild);
                parents->Rchild=NULL;
            }
        }
        // both child present
        else if (position->Lchild!=NULL && position->Rchild!=NULL)
        {
            node* ptr=succ(position);
            int copy=ptr->data;
            Deletion(copy);
            position->data=copy;
        }
        //anyone chid is absent
        else
        {
            if (parents->Lchild==position)
            {
                if (position->Lchild==NULL)
                {
                    parents->Lchild=position->Rchild;
                }
                else
                {
                    parents->Lchild=position->Lchild;
                }
            }
            else if (parents->Rchild==position)
            {
                if (position->Lchild==NULL)
                {
                    parents->Rchild=position->Rchild;
                }
                else
                {
                    parents->Rchild=position->Lchild;
                }
            }
        }
    }
}


int main ()
{
    int ch,item;
    while(1)
    {
        printf("\nMENU\n1 INSERTION \n2 INORDER\n3 Search\n4 Delete\n5 Exit\nEnter Your Choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:Insertion();
                    break;
            case 2:Inorder(root);
                    break;
            case 3:{
                    printf("Enter the data to be searched ");
                    scanf("%d",&item);
                    node* s=Search(root,item);
                    break;
                    }
            case 4:{
                    int item;
                    printf("Enter the data to be deleted ");
                    scanf("%d",&item);
                    Deletion(item);
                    break;
            }
            case 5:exit(0);
                    break;
            default:printf("ERROR");
                    break;
        }
    
    }
    return 0;
}

