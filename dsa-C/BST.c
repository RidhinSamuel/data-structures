#include<stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *Rchild,*Lchild;
}node;
node *root=NULL,*parents=NULL;

/**
 * The function takes an integer as input and inserts it into the binary search tree
 */
int Insertion()
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
	            return 0;
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
void Preorder(node *ptr)
{   
    node* p=ptr;
    if (p!=NULL)
    {
        printf("%d ",p->data);
        Preorder(p->Lchild);
        Preorder(p->Rchild);
    }
}
void Postorder(node *ptr)
{   
    node* p=ptr;
    if (p!=NULL)
    {
        Postorder(p->Lchild);
        Postorder(p->Rchild);
        printf("%d ",p->data);
    }
}

/**
 * The function takes a root node and an item to be searched as input and returns the node containing
 * the item if found, else returns NULL
 */
node* Search(node *r,int item)
{
    int flag=0;   
    while(r!=NULL)
    {   
        //printf("\nDATA root %d\n",r->data);
        if (r->data==item)
        {   
            flag=1;
            break;
        }
        else if(r->data<item)
        {   
            parents=r;
            r=r->Rchild;
        }
        else if (r->data>item)
        {
            parents=r;
            r=r->Lchild;
        }
    }
    if(flag==0)
    {
        printf("\nData not found ");
        return NULL;
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
    //node* parents=NULL;
    node* ptr=Search(root,item);
    //printf("\n\n Delete  ");
    /* This is a bug. It should be `if(position==NULL)` */
    if(ptr==NULL)
    {
        //printf("\nDATA NOT FOUND\n");
        return 0;
    }
    else
    {   
        //printf("\nDATA OF PARENTS %d\nData of Position %d\n",parents->data,position->data);
        if(ptr->Lchild==NULL && ptr->Rchild==NULL)
        {
            if (parents->Lchild==ptr)
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
        else if (ptr->Lchild!=NULL && ptr->Rchild!=NULL)
        {
            node* ptr=succ(ptr);
            int copy=ptr->data;
            Deletion(copy);
            ptr->data=copy;
        }
        //anyone chid is absent
        else
        {
            if (parents->Lchild==ptr)
            {
                if (ptr->Lchild==NULL)
                {
                    parents->Lchild=ptr->Rchild;
                }
                else
                {
                    parents->Lchild=ptr->Lchild;
                }
            }
            else if (parents->Rchild==ptr)
            {
                if (ptr->Lchild==NULL)
                {
                    parents->Rchild=ptr->Rchild;
                }
                else
                {
                    parents->Rchild=ptr->Lchild;
                }
            }
        }
    }
}

/**
 * The above function is a menu driven program for performing various operations on a binary search
 * tree*/
int main ()
{
    int ch,item;
    while(1)
    {
        printf("\nMENU\n1 INSERTION \n2 INORDER\n3 Preorder\n4 Postorder\n5 Search\n6 Delete\n7 Exit\nEnter Your Choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:Insertion();
                    break;
            case 2:Inorder(root);
                    break;
            case 3:Preorder(root);
                    break;
            case 4:Postorder(root);
                    break;
            case 5:{
                    printf("Enter the data to be searched ");
                    scanf("%d",&item);
                    node* s=Search(root,item);
                    break;
                    }
            case 6:{
                    int item;
                    printf("Enter the data to be deleted ");
                    scanf("%d",&item);
                    Deletion(item);
                    break;
            }
            case 7:exit(0);
                    break;
            default:printf("ERROR");
                    break;
        }
    
    }
    return 0;
}

